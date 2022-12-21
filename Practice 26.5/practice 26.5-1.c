///1
#include<stdio.h>
int main()
{
    float a,b,ans;
    scanf("%f %f",&a,&b);
    ans=(a+b)/2;
    float* p;
    p=&ans;
    printf("%0.3f\n",*p);

    return 0;
}
