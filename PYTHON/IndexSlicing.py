a = 100
i = 0
result = 0
for i in range(1, 3):
    result = a >> i
    result += 1
print(result)
print("========================")

# pop() : 마지막 또는 지정 요소를 삭제하고 그 값을 반환
arr = [1,2,3,4,5]
print(arr.pop(2))
print("========================")

def func(num1, num2=2):
    print('a=', num1, 'b=', num2)
func(20)
print("========================")

# 슬라이싱
list = ['Hello', 'Python', 'World']
print(list[0][3:], list[2][:-3])

str = "01234567"
print(str[:-3]) # 01234
print(str[-5:-1]) # 3456
print(str[-2:-7:-1]) # 65432
print(str[-5:-1:2]) # 35
print(str[1:5:1]) # 1234
print(str[5:1:-1]) # 5432


# 내용정리<10/4>
print(str[1:]) # 1234567
print(str[-2:]) # 67
print(str[:4]) # 0123
print(str[:-2]) # 012345
print(str[::2]) # 0246
print(str[::-2]) # 7531
print(str[2::-1]) # 210
print(str[:-3:-1]) # 76
print(str[1::2]) # 1357
print(str[:3:1]) # 012
print(str[-1::1]) # 7
print("========================")
print(str[1:3]) # 12
print(str[-3:-1]) # 56
print(str[3:-1]) # 3456
print(str[-1:3]) # ERROR
print("========================")
print(str[0:3:2]) # 02
print(str[-5:-1:2]) # 35
print(str[2:-1:2]) # 246
print(str[-1:3:1]) # ERROR
print(str[3:0:-2]) # 31
print(str[-1:-4:-2]) # 75
print(str[-1:2:-2]) # 753
print(str[2:-1:-1]) # ERROR
