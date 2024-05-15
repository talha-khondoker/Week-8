#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n; i++)
    {
        cin>>a[i];
    }
    map<ll, ll> prime;;
    for(int i=0; i<n; i++)
    {
        for(int j=2; j*j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                prime[j]++;
                while (a[i]%j==0)
                {
                    a[i]/=j;
                }
            }
        }
        if(a[i]>1)
        {
            prime[a[i]]++;
        }
    }
    ll ans = 1;
        for(auto it = prime.begin(); it != prime.end(); it++)
        {
            ans = max(ans, (*it).second);
        }
        cout << ans << endl;
    return 0;
}
