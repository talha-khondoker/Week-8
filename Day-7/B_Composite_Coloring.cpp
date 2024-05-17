#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<ll> prime = {2 , 3, 5, 7, 11 , 13, 17 , 19 , 23 , 29 , 31} ;
        int cnt=0;
        vector<ll> ans(n);
        for(auto x:prime)
        {
            bool flag=false;
            for(int i=0; i<n; i++)
            {
                if(ans[i]==0 && a[i]%x==0)
                {
                    if(!flag)
                    {
                        flag=true;
                        cnt++;
                    }
                    ans[i]=cnt;
                }
            }
        }
        cout<<cnt<<'\n';
        for(auto val:ans)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}