l=[]
n=int(input("Enter size of list "))
for i in range(0,n):
    e=int(input("Enter element of list "))
    l.append(e)

print("Positive numbers in",l,"are: ")

positive_num = [num for num in l if num >= 0]
  
print(positive_num)
