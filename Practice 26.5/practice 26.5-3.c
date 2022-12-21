///3,using pointer
#include<stdio.h>
int main()
{
    int i,n,arr[10];
    int* p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=&arr[0];

    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
