#include<stdio.h>
int main()
{
    int n,a[100000],i,j,f=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
                c++;
            }
        }
        if(c>0)
        {
         if(a[i]!='\0')
                {
                printf("%d ",a[i]);
                }
                f++;   
        }
    }
    if(f==0)
    {
        printf("unique");
    }
    return 0;
}
