class A:
    def Hello():
        return "Hello"
class B(A):
    pass
class C(B):
    def Oh():
        return "Oh"
    

a=C
print(a.Hello())
print(a.Oh())
print(a.mro())
