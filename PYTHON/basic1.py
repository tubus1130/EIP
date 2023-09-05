print(31+2.7)
print(True)
print("================================")

print("dongho") # dongho
print("dong", "ho") # dong ho
print("\"dongho\"") # "dongho"
print("dongho"*3) # donghodonghodongho
print("================================")

a = "dong"
print("%s" %a) # dong
b = "%s" % " ho"
print(a + b) # dong ho
print(b) #  ho
c = 123
print("%s %d" %(a, c)) # dong 123
print("================================")

print("hello" in "hello world")
print("dong" in "hello world")
print("================================")
'''
    upper() : 대문자
    lower() : 소문자
    isalnum() : T/F 알파벳, 숫자
    isalpha() : T/F 알파벳
    isdecimal() : T/F 정수
    isdigit() : T/F 숫자
    isspace() : T/F 공백
'''
str = "Dongho"
print(str.upper()) # DONGHO
print(str.lower()) # dongho
print(str.isspace()) # False
