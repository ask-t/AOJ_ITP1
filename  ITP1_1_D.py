a = 46979
b = a%60
c = int((a-b)/60)
d = c%60
e = int((c-d)/60)
print(a,b,c,d,e)
print(f"{e}:{d}:{b}")