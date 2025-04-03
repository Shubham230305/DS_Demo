#include<stdio.h>
#include<unistd.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("Substraction is : %d",c);
    printf("\nwe are in Substraction file %d",getpid());
}