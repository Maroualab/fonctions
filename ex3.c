#include <stdio.h>

int Max(int a,int b)
{
    if(a>b)
    return a;
    return b;
}
int main()
{
    int Max(int,int);
    int a,b,max;
    printf("Entrez deux entiers:\n");
    scanf("%d%d",&a,&b);
    max=Max(a,b);
    printf("le maximum est: %d\n",max);
    return 0;
}
