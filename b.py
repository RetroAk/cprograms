
def add(x,y):
  return x + y

print('select operation')
print('1.add')
print('2.close')

while True:
 c=input('enter choice(1,2): ')

 if c in ('1'):
     n1=float(input('entr 1st no: '))
     n2=float(input('entr 2nd no: '))
 if  c == '1':
     print(n1, "+", n2, "=", add(n1, n2))
 elif c == '2':
    print('wrong')
 break

else:
    print('madth')


