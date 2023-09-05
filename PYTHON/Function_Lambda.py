# 디폴트 매개변수
def func(num1, num2=2):
    print('a=', num1, 'b=', num2)

func(10)
func(10, 5)
print("===================")

# 람다
sum = lambda n,m : n+m
print(sum(2,3))

def f(n):
    return lambda a:a*n
k = f(3)
print(k(10))

a = [1,2,3,4,5]
m = list(map(lambda num:num+100, a))
print(m)
f = list(filter(lambda num:num>2, a))
print(f)
