#include<stdio.h>
int main()
{
    int i, hasil, num, n1, n2;
    scanf("%d %d", &n1,&n2);
    int bil1[n1], bil2[n2];
    if(n1==n2){
        for(i=0;i<n1;i++){scanf("%d", &num);bil1[i]=num;}
        for(i=0;i<n2;i++){scanf("%d", &num);bil2[i]=num;}
        for(i=0;i<n1;i++){hasil=bil1[i]*bil2[i];printf("%d ", hasil);}}
    else{
        printf("Jumlah tidak sama");}
}
