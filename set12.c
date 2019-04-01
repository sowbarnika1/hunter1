#include<stdio.h>
int main()
{
    int n,a[100000],i,j,t,p,sum=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=n;
    while(t>0)
    {
    max=a[t];
    for(i=0;i<n;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
            p=i;
        }
    }
    printf("%d ",max);
    sum=sum*10+max;
    a[p]=0;
    t--;
    }
    printf("%d",sum);
    return 0;
}
