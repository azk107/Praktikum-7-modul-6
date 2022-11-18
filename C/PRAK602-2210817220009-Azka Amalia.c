#include<stdio.h>
int main()
{
    int i, kolom, num;
    scanf("%d", &kolom);
    int bil[kolom];
    for(i=0;i<kolom;i++){
        scanf("%d", &bil[i]);}
    for(num=0;num<kolom;num++){
    printf("%d ", bil[num]*(num+1));}
}
