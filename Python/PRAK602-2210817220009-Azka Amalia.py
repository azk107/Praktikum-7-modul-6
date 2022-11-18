kolom=int(input())
bil=[0 for col in range(0,kolom)]
for i in range(0,kolom):
    angka=int(input())
    bil[i]=angka
for num in range(0,kolom):
    print(bil[num]*(num+1),end=' ')