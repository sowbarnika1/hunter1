#include<stdio.h>
int main()
{
    int n,a[100000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==a[i])
        {
            printf("%d ",a[i]);
            
        }
    }
    return 0;
}
