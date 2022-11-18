ordo=int(input())
print("Matriks A")
bil1=[];bil2=[]
for n in range(0,ordo):
    mat1=list(map(int,input().split()))
    bil1.append(mat1[0:ordo])
print("Matriks B")
for n in range(0,ordo):
    mat2=list(map(int,input().split()))
    bil2.append(mat1[0:ordo])
print("Matriks AXB")
for n in range(0,ordo):
    for m in range(0,ordo):
        hasil=0
        for o in range(0,ordo):
            hasil+=bil1[n][o]*bil2[o][m]
        print(hasil,end=' ')
    print()