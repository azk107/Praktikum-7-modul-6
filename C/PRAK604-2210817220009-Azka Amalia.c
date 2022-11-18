#include<stdio.h>
int main()
{
    int i,j;
    char k1[50], k2[50];
    printf("");gets(k1);
    printf("");gets(k2);
    int kata1=strlen(k1),kata2=strlen(k2);
    if(kata1!=kata2){
        printf("Panjang kalimat berbeda, pesan palsu");}
    else{
        int i=0,j=0;
        for (int k=0;k<kata1;k++){
            if (k2[k]==' ' && k1[k]==' '){continue;}
            else if(k1[k]!=k2[k]){
                printf("#");i++;}
            else if(k1[k]==k2[k]){
                printf("*");j++;}}
        printf("\n*= %d",j);printf("\n#= %d",i);
        if(i<=j){printf("\nPesan Asli");}
        else{printf("\nPesan Palsu");}}
}
