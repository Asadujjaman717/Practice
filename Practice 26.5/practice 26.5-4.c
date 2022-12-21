///4,function
#include<stdio.h>
double radius(double r)
{
    double ans,pie=3.14159;
    ans=pie*r*r;
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    double solution=radius(n);
    printf("%0.6lf",solution);
    return 0;
}
