#include<stdio.h>
void main()
{
    int n,a[50],i,s=0,ag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    ag=s/n;
printf("%d",ag);
}
