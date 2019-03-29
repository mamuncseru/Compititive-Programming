#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    char c[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        gets(c);
        if(strlen(c)>10)
        {
                printf("%c%d%c\n",c[0],strlen(c)-2,c[strlen(c)-1]);
        }
        else
        {
            printf("%s\n",c);
        }

    }
    return 0;
}
