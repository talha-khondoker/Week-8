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
        vector<ll> a(n+3);
        bool flag=true;
        for(int i=1; i<=n; i++)
        {
            cin>> a[i];
        }
        for(int i=1; i<=n; i++)
        {
            bool ok=true;
            for(int j=2;j<=i+1;j++)
            {
                if(a[i]%j!=0)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout<< "NO"<<'\n';
        }
    }
    
    return 0;
}