#include<stdio.h>
int main()
{
    int n,a[100000],i,j,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
                f=1;
                break;
            }
            else
            {
                f=0;
            }
        }
        if(f==0 && a[i]!='\0')
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
