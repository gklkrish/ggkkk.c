#include<stdio.h>
void main()
{
int a[10],v,p,temp,n;
printf("enter the number");
scanf("%d",&n);
printf("enter the number");
for(v=0;v<n;v++)
{
scanf("%d",&a[v]);
}
for(v=0;v<n;v++)
{
for(p=v+1;p<n;p++)
{
if(a[v]>a[p])
{
temp=a[p];
a[v]=a[p];
a[p]=temp;
}
}
}
for(v=0;v<n;v++)
{
printf("%d",a[v]);
}
}
