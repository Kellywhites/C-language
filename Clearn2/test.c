#include <stdio.h>
int A[1000001];
typedef long long ll;
void sieve()
{
    int i, j;
    A[0]=0;
    A[1]=1;
    for(i=2;i<=1000000;i++)
    {
        A[i]=i;
    }
    for(i=2;i<=1000000;i++)
    {
        if(A[i]==i)
        {
        A[i]=i-1;
        for(j=i*2;j<=1000000;j+=i)
        {
            A[j]-=A[j]/i;
        }
        }
    }
}
ll pow1(int a, int b)
{
    ll kq=1;
    int i=1;
    while(b)
    {
        if(b%2==1)
        {
            kq*=a;
        }
        a*=a;
        b/=2;
    }
    return kq;
}
int main()
{ 
    printf("%lld", pow1(4, 3));
}