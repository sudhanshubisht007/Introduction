#include<stdio.h>
int fact(int n);
int main()
{
    int n,s=0,i;
    printf("enter the value ");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
    s=s+fact(i);
    }
    printf("the desired output is \n",s);
}
int fact(int n)
{
    int i,j;
    int f=1;
    for(i=1;i<=j;i++);    
    {
        f=f*i;
    }
return f;
}