name="Anshul"
desg=input("enter your designation:(M,S,T):  ")
if desg=='M' or desg=='m':
    sal=40000
    print("basic salary: ",sal)
elif desg=='S' or desg=='s':
    sal=30000
    print("basic salary: ",sal)
elif desg=='T' or desg=='t':
    sal=25000
    print("basic salary: ",sal)
else:
    print("invalid designation.")
da=sal*0.2
hra=sal*0.25
pf=sal*0.1
net=sal+da+hra-pf
print("net salary of the employee is: ",net)