```
en
conf t

int fa0/0
ip address 192.168.0.1 255.255.255.0
no shutdown
do memory write

ip dhcp pool net1
network 192.168.0.1 255.255.255.0

exit
```

`en` - enable
`conf  t` - config

`int fa0/0` - the interface to configure
`ip address 192.168.0.1 255.255.255.0` - range to set along with subnet mask
`no shutdown` - status of the interface
`do memory write` - write to memory

`ip dhcp pool net1` - config dhcp and name is net1

`network 192.168.0.1 255.255.255.0` - addresses to use
`exit` - to exit config mode

enable
open congig

item to edit
ip range
stay on
write

config dhcp
address to use

exit