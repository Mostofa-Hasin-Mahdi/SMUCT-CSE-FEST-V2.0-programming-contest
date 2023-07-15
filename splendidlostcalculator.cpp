#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    long int a,b,c;
    scanf("%ld %ld %ld", &a, &b, &c);
    switch(c)
    {
        case 1: printf("Result: %ld",a+b+9);
        break;
        case 2: printf("Result: %ld",a+b);
        break;
        case 3: printf("Result: %ld",a%b);
        break;
        case 4: printf("Result: %ld",a*b);
        break;
    }

}
