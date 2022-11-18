baris, kolom = map(int,input().split())
angka = [[0 for row in range(0,kolom)]for col in range(0,baris)]
for i in range(0,baris):
    for j in range(0,kolom):
        num=int(input())
        angka[i][j]=num
for i in range(0,baris):
    for j in range(0,kolom):
        print(angka[i][j],end=' ')
    print()      