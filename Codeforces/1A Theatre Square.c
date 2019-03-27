#include <stdio.h>

int main()
{
    double s1,s2;
    long long int n,m,a,s;
    scanf("%I64d%I64d%I64d",&n,&m,&a);
    s1=n/a;
    s2=m/a;
    if(n%a!=0)
    {
        s1=s1+1;
    }
    if(m%a!=0)
    {
        s2=s2+1;
    }
    s=s1*s2;
    printf("%I64d\n",s);
    return 0;
}
