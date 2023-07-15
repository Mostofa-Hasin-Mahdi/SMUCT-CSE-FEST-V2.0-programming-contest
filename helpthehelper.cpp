#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,caSe;
    caSe = 1;
    scanf("%d",&t);
    string s;
    while(t--)
    {
        c = 0;
        cin>>s;
        if(s[0]=='0' ||(s.size()==1 && s=="S"))
        {
            printf("Road %d: NULL\n",caSe);
            caSe++;
        }
        else{
            if(!isupper(s[0]))
            c++;

        for(int i=1;i<s.size();i++)
        {
            if(isupper(s[i]))
                c++;
        }
        printf("Road %d: %d\n",caSe,c);
        caSe++;
        }
    }
    return 0;

}
