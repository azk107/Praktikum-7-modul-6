n1,n2=map(int,input().split())
if n1==n2:
    nilai1=list(map(int,input().split()))
    nilai2=list(map(int,input().split()))
    mat1=[];mat2=[];num=0
    mat1.append(nilai1[num:num+n1])
    mat2.append(nilai2[num:num+n2])
    for i in range(0,n1):
        print(mat1[0][i]*mat2[0][i],end=' ')
else:
    print("Jumlah tidak sama")