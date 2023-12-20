n = int(input())

l = ["0", "1"]

for i in range(1,n):
    l.extend(l[-1::-1])
    for i in range(len(l)//2):
        l[i] = "0"+l[i]
    for i in range(len(l)//2, len(l)):
        l[i] = "1"+l[i]
for i in l:       
    print(i)