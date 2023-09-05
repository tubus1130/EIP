# 상속
# - 파이썬은 상속받을 경우 자바와다르게 부모 생성자 호출하지 않는다.
class A:
    def fnA(self):
        print('A')
class B(A):
    def fnB(self):
        print('B')
b = B()
b.fnA()
b.fnB()
print("=====================")

# 오버라이딩
# - 파이썬은 오버로딩 지원 x
# super() 로 부모클래스의 변수나 메소드 접근가능

class C:
    def fn(self):
        print("C")
class D(C):
    def fn(self):
        super().fn()
        print("D")
d = D()
d.fn()
