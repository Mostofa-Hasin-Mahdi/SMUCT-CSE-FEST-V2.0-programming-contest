#include<bits/stdc++.h>
using namespace std;
long long gcd(long long int a, long long int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
long long int a,b,c1=0,res=0;
scanf("%lld %lld", &a,&b);
res=gcd(a,b);
c1=(a/res)+(b/res);

printf("Minimum Number of Container: %lld\n", c1);

return 0;
}
