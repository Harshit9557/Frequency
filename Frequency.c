#include<stdio.h>
int main()
{
int f[10]={0},n,r,i,j;
printf("enter the number");
scanf("%d",&n);
for(i=0;n>0;i++)
{
r=n%10;
for(j=0;n>0;j++)
{
if(r==i)
{
f[j]++;

}


}
n=n/10;
}
for(i=0;i<10;i++)
{

    printf("%d\n",f[i]);
}

}
