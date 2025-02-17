n=int(input())
strings=input().split()
s=input()
count=0
for str in strings:
    for ch in str:
        result=s.replace(ch,"")
        s=result
        if(s==""): break
    count+=1
print(s) 
print(count)