a , b = 2, 0
try:
    print(a / b)
    raise
except IndexError as e:
    print('[exception]', e)
except ZeroDivisionError as e:
    print('[exception]', e)
finally:
    print("hi")
# finally : 예외여부 상관없이 실행
# else : 예외가 아닐경우만 실행
