#include<stdio.h>
int main()
{
    int angka[20][20];
    int baris, kolom, i, j;
    scanf("%d", &baris);scanf("%d", &kolom);
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            scanf("%d", &angka[i][j]);}}
    printf("\n");
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++){
            printf("%d ", angka[i][j]);}
        printf("\n");}
}
