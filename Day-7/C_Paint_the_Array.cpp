#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc ;
    while (tc--)
    {
        ll n; 
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }
        ll gcd1=0, gcd2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                gcd1=__gcd(gcd1,a[i]);
            }
            else
            {
                gcd2=__gcd(gcd2,a[i]);
            }
        }
        bool first=false, second=false;
        for(int i=1;i<n;i+=2)
        {
            if(a[i]%gcd1 == 0)
            {
                first=true;
                break;
            }
        }
        for(int i=0;i<n;i+=2)
        {
            if(a[i]%gcd2 == 0)
            {
                second=true;
                break;
            }
        }
        if(first && second)
        {
            cout<<0<<'\n';
        }
        else if(first==false)
        {
            cout<<gcd1<<'\n';
        }
        else
        {
            cout<<gcd2<<'\n';
        }
    }
    
    return 0;
}