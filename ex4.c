#include <stdio.h>

int Min(int a,int b)
{
    if(a<b)
    return a;
    return b;
}
int main()
{
    int Min(int,int);
    int a,b,min;
    printf("Entrez deux entiers:\n");
    scanf("%d%d",&a,&b);
    min=Min(a,b);
    printf("le minimum est: %d\n",min);
    return 0;
}
