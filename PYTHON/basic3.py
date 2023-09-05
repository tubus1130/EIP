# 리스트형
list1 = [1, 2, 3]
list2 = "python"
print(type(list1))
print('=======================')

# 튜플형
tuple1 = (1,2)
tuple2 = ('a', 'b', 'c')
print(type(tuple1))
print(type(tuple2))
print('=======================')

# 세트형 - 중복, 순서x
set1 = {1, 3, 5}
set2 = set([1, 3, 5])
set2.add(7)
print(set2)
set2.update([5, 6, 7, 8])
print(set2)
set2.remove(5)
print(set2)
print(type(set1))
print('=======================')

# 딕셔너리형 - 키, 값
dict1 = {'a': 5, 'b' : 3}
dict1['c'] = 2;
print(dict1)
del dict1['b']
print(dict1)
print(type(dict1))
print('=======================')

# len : 자료형의 크기
print(len(list1))
print(len(set2))
