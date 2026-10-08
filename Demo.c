#include<stdio.h>
int main()
{
int n,i, sum=0;

printf("Enter a natural number:");
scanf("%d",&n);

for (i = 1; i<=n; i++)
{
    sum+=i;
}
printf("sun of the first %d number is:%d\n",n,sum);
return 0;

}