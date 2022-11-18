k1=input();k2=input()
kata1=len(k1);kata2=len(k2)
i=0;j=0
if kata1!=kata2:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for k in range(0,kata1):
        if k1[k]==k2[k]:
            if k1[k]=='':
                print(" ",end='')
            else:
                print("*",end='');i+=1
        else:
            print("#",end='');j+=1
    print("\n* = ", i);print("# = ", j)
    if i>=j:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")