#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check_prime(ll n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool check_perfectSquare(ll n)
{
    ll x=sqrtl(n);
    return (x * x) == n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0;i < n;i++) 
    {
        if (check_prime(sqrtl(a[i])) && check_perfectSquare(a[i])) 
        {
            cout << "YES" << '\n';
        }
        else 
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}