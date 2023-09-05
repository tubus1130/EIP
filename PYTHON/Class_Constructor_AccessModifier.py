# self : 현재 객체를 가리킴, 매개변수에 써줘야함
class Main:
    def setS(self, a):
        self.a = a
    def getS(self):
        return self.a

a = Main()
a.setS(5)
print(a.getS())
print("============================")

# 생성자, 소멸자
class Python:
    def __init__(self):
        print("생성자")
    def __del__(self):
        print("소멸자")
    def fn(self):
        print("일반함수")

b = Python()
b.fn()
del b
print("============================")

# 접근제어자
'''
    public
    _protected
    __private
'''
class Access:
    def __init__(self):
        self.public = "PUBLIC"
        self._protected = "PROTECTED"
        self.__private = "PRIVATE"
    def fn(self):
        print(self.public)
        print(self._protected)
        print(self.__private)

a = Access()
a.fn()
print(a.public)
print(a._protected)
#print(a.__private) 접근불가
