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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(check_prime(n))
    {
        cout<<1<<'\n';
    }
    else if(n % 2 == 0) 
    {
        cout << 2 << '\n';
    }
    else
    {
        if(check_prime(n-2))
        {
            cout<<2<<'\n';
        }
        else
        {
            cout<<3<<'\n';
        }
    }
    return 0;
}