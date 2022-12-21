///5,function
#include<stdio.h>
int sum(int ara[],int n)
{
    int i,summ=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]%10==0)
        {
            summ+=ara[i];
        }
    }
    return summ;
}
int main()
{
    int i,n,arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=sum(arr,n);
    printf("%d",ans);
    return 0;
}
