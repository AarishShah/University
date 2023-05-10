#Create a simulator object
set ns [new Simulator]

#Open the nam trace file
set nf [open out.nam w]
$ns namtrace-all $nf

#define a 'finish' procedure
proc finish {} {
 global ns nf
 $ns flush-trace
 #close the trace file
 close $nf
 #execute nam on the trace file
 exec nam out.nam &
 exit 0
 }
 
 #create two node
 set n0 [$ns node]
 set n1 [$ns node]
 
 #create a duplex link between the nodes
 $ns duplex-link $n0 $n1 1Mb 10ms DropTail
 
 #create a udp agent and attach it ti node n0
 set udp0 [new Agent/UDP]
 $ns attach-agent $n0 $udp0
 
 #create a CBR traffic source and attach it to udp0
 set cbr0 [new Application/Traffic/CBR]
 $cbr0 set packetSize_ 500
 $cbr0 set interval_ 0.005
 $cbr0 attach-agent $udp0
 
 #create a null agent (atraffic sink) and attach it to node n1
 set null0 [new Agent/Null]
 $ns attach-agent $n1 $null0
 
 #connect the treffic source with the traffic sink 
 $ns connect $udp0 $null0
 
 #schedule events for the cbr agent
 $ns at 0.5 "$cbr0 start"
 $ns at 4.5 "$cbr0 stop"
 
 #call the finish procedure after 5 seconds of simulation time
 $ns at 5.0 "finish"
 
 #run the simulation
 $ns run 
