///2
#include<stdio.h>
int bubblesort(int* arr[],int* n)
{

    int i,j,temp;
    for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp= *arr[i];
                *arr[i]= *arr[i+1];
                *arr[i+1]= temp;
            }
        }
    }



}
int main()
    {
        int n,i,ara[10];
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        bubblesort(&ara,&n);
        for(i=0;i<n;i++)
        {
            printf("%d ",ara[i]);
        }

        return 0;
    }

