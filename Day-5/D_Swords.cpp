#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll mx=0;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    ll ans=0, gcd=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==mx)
        {
            continue;
        }
        ans += mx-a[i];
        gcd=__gcd(gcd,mx-a[i]);
    }
    cout<<ans/gcd<<" "<<gcd<<'\n';
    return 0;
}