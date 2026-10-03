a=int(input("enter a value: "))
sum=0
while (a!=0):
    n=a%10
    sum=sum+n
    a=a//10
print("sum of digits of the given value is ",sum)
