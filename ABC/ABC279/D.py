import math

i = list(map(int, input().split()))
a = i[0]
b = i[1]
x = (a*a)/(4*b*b)
x = x ** (1 / 3)
x -= 1
ans = 0.0

if x < 0:
  x = 0
  ans = a
else:
  x = math.floor(x)
  ans = a / (x + 1) ** (1 / 2) + b * x
  tmp = a / (x + 2) ** (1 / 2) + b * (x + 1)
  if tmp < ans:
    ans = tmp
    
print('{:.8f}'.format(ans))