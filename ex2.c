#include<stdio.h>
int Produit(int a,int b)
{
    int p;
    p=a*b;
    return p;
}
int main()
{
    int Produit(int,int);
    int a,b,produit;
    printf("donnez deux entiers\n");
    scanf("%d%d",&a,&b);
    produit=Produit(a,b);
    printf("%d * %d = %d\n",a,b,produit);
    return 0;
}
