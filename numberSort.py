a=int(input())
j=list(map(int,input().split()))

j.sort()
for i in range(len(j)):
    if i==len(j)-1:
        print(j[i])
    else:
        print(j[i],end=" ")
