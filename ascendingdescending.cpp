#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
vector<int> a;
vector<int> odd;
vector<int> even;
int t;
int n;
 int x;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even.push_back(a[i]);
        }
        else{
            odd.push_back(a[i]);
        }
    }
    for(int i=0;i<even.size();i++)
    {
        cout<<even[i]<<" ";
    }
    for(int i = odd.size()-1;i>=0;i--)
    {
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    a.clear();
    odd.clear();
    even.clear();

}
    return 0;

}
