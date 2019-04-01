#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,x=0;
    char c[4];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(c);
        for(j=0;j<strlen(c);j++)
        {
            if(c[j]=='+')
            {
                x=x+1;
                break;
            }
            else if(c[j]=='-')
            {
                x=x-1;
                break;
            }
        }
    }
    printf("%d\n",x);
    return 0;
}
