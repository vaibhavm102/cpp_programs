#include<stdio.h>
int main()
{
    int i=0,n,a=0,b=1,c=0;
    scanf("%d",&n);

while(i<=n)
{
    printf("%d",c);
   a=b;
   b=c;
   c=a+b;
   i++;
}
}