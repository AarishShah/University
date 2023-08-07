// default constructor
// parameterised constructor

class Student {
    int s1, s2, s3;

    Student(int s1, int s2, int s3) {
        this.s1 = s1;
        this.s2 = s2;
        this.s3 = s3;
    }

    Student(int s3) {
        this(0, 0, s3); // 'this' will call the above constructor
    }

    Student(Student x) {
        this(x.s1, x.s2, x.s3); // 'this' will call the above constructor

    }
}

class Main {
    public static void main(String[] args) {
        Student s = new Student(2, 3, 4); // will go in first constructor
        Student g = new Student(5); // will call line 11
        Student f = new Student(s); // will go to line 16

        System.out.println(s.s1 + " " + s.s2 + " " + s.s3);
        System.out.println(g.s1 + " " + g.s2 + " " + g.s3);
        System.out.println(f.s1 + " " + f.s2 + " " + f.s3);


        // similarly if i call fn with a particular data type, then that particular fn with that data type will b clled

    }
}