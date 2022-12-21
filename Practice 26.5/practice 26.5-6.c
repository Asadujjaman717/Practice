///6,function
#include<stdio.h>
#include<string.h>
void func(char str2[50])
{
    int i,x;
    for(i=0; i<=strlen(str2); i++)
    {
        if(str2[i]>='a' && str2[i]<='z')
        {
            x=str2[i];
            if(x%2==0)
            {
                str2[i]=str2[i]-32;
            }
        }
    }
    printf("%s",str2);

}
int main()
{
    char str[50];
    scanf("%s",str);
    func(str);

    return 0;
}
