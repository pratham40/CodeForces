#include<stdio.h>
int main()
{
    long long n,m,a,len,bre;
    scanf("%lld %lld %lld",&n,&m,&a);
    len=n/a;
    if(n%a!=0)
    len++;
    bre=m/a;
    if(m%a!=0)
    bre++;
    printf("%lld",bre*len);
    return 0;
}
