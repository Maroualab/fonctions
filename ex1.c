#include<stdio.h>

int Somme(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
int main()
{
    int Somme(int,int);
    int a,b,som;
    printf("donnez deux entiers\n");
    scanf("%d%d",&a,&b);
    som=Somme(a,b);
    printf("%d + %d = %d\n",a,b,som);
    return 0;
}
