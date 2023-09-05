score = input()
score = eval(score)
if score >= 90:
    print("A")
elif score >= 80:
    print("B")
elif score >= 70:
    print("C")
else:
    print("F")
print("========================")

# while
i = 0
sum = 0
while i < 5:
    i = i + 1
    sum += i
print(sum)

# for문
j = 0
total = 0
for j in range(1,10,2):
    total += j
print(total)

# for - each 문
li = [1,2,3,4,5]
for a in li:
    print(a)

# 이중 for each 문
li2 = [[1,2],[3,4,5]]
for a in li2:
    for b in a:
        print(b, end='')

