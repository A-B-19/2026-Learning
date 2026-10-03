x=int(input("enter a number: "))
sum=1
a=x
for i in range(9):
    sum+=a
    a=a*x
print(sum)