#include<stdio.h>
int main()
{
    int mat1[20][20], mat2[20][20], hasil[20][20];char matriks;
    int a=0, n1, n2, n3, ordo;
    scanf("%d", &ordo);
    printf("Matriks A\n");
    int bil1[n1], bil2[n2];
    for(n1=0;n1<ordo;n1++){
        for(n2=0;n2<ordo;n2++){scanf("%d", &mat1[n1][n2]);}}
    printf("Matriks B\n");
    for(n1=0;n1<ordo;n1++){
        for(n2=0;n2<ordo;n2++){scanf("%d", &mat2[n1][n2]);}}
    for(n1=0;n1<ordo;n1++){
        for(n2=0;n2<ordo;n2++){
            for(n3=0;n3<ordo;n3++){
                a=a+mat1[n1][n3]*mat2[n3][n2];}
                hasil[n1][n2]=a;
                a=0;}}
                printf("Matriks AXB\n");
                for(n1=0;n1<ordo;n1++){
                    for(n2=0;n2<ordo;n2++){printf("%d ", hasil[n1][n2]);}
                        printf("\n");}
}
