str = "1,2,3".split(",") # ['1', '2', '3']
print(str)
print("=========================")

a = [20, 10, 30]
print(a)
a.append(40)
print(a)
a.extend(a);
print(a)
print(a.pop())
print(a)
a.reverse()
print(a)
a.insert(2, "dh")
print(a)
a.remove("dh")
print(a)
print("=======================")
b = a.copy()
print(b)
print(a.count(10))

print("=======================")

# 인덱싱은 음수일경우 뒤에서부터 a[-1]부터 a[-n]까지
# 인덱싱을 할 경우 출력값에 괄호없음!
c = [1, 2, 3, 4, 5]
print(c[-4])


# 슬라이싱을 할경우 문자열은 괄호가 없지만, 다른 시퀀스 자료형은 괄호 출력
d = "dongho"
print(d[:4])
e = [1,2,3,4]
print(e[:3])
