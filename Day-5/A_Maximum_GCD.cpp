#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    return __gcd(a,b);
}
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
        cout<<(n/2)<<'\n';
    }
    
    return 0;
}