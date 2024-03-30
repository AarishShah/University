# Hybrid inheritance is a combination of two or more types of inheritance. For example, it could involve a mix of multiple and multilevel inheritance.

class A:
    def methodA(self):
        print("A's method")

class B(A):
    def methodB(self):
        print("B's method")

class C(A):
    def methodC(self):
        print("C's method")

class D(B, C):
    def methodD(self):
        print("D's method")

# Example
d = D()
d.methodA()  # Inherited from A (through B and C)
d.methodB()  # Inherited from B
d.methodC()  # Inherited from C
d.methodD()  # Defined in D
