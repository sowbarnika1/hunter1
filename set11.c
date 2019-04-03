#include<stdio.h>
int main()
{
    int n,a[100000],i,j,k=0,c=0,b[100],t,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               a[j]='\0';
                c++;
                f++;
                
            }
        }
        if(f>0)
        {
            if(a[i]!='\0')
                {
                 b[k]=a[i];
                k++;
               }
        }
        
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i]>b[j])
            {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
            }
        }
        printf("%d ",b[i]);
    }
    
    if(c==0)
    {
        printf("unique");
    }
    return 0;
}
