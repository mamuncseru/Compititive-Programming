#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("larger is %d\n",a);
    }
    else if(b>c && b>a)
    {
        printf("larger is %d\n",b);
    }
    else
    {
        printf("larger is %d\n",c);
    }
    return 0;
}
