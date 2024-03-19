/*  Reverse the digits of a given number.*/
#include<stdio.h>
int main()
{
    int n,d=0,s=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s=(s*10)+d;
        n=n/10;
    }
    printf("Reversed number is : %d\n",s);
}