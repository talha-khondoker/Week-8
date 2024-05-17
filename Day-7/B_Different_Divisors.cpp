#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<bool> p(100001, true);
vector<ll> prime;
void prime_check()
{
    for(ll i=2; i<100001; i++)
    {
        if(p[i])
        {
            for(ll j=i+i; j<100001; j+=i)
            {
                p[j]=false;
            }
        }
    }
    for(ll i=0; i<100001; i++)
    {
        if(p[i])
        {
            prime.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    prime_check();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll d;
        cin>>d; 
        bool first, second, answer;
        first=true, second=false, answer=false;
        ll ans1, ans2;
        for(ll i=0; i<100001; i++)
        {
            if(prime[i]-1>=d && first)
            {
                ans1=prime[i];
                first=false;
                second=true;
            }
            else if(prime[i]-ans1>=d && second)
            {
                ans2=prime[i];
                answer=true;
                break;
            }
        }
        if(answer)
        {
            cout<<ans1*ans2<<'\n';
        }
    }
    
    return 0;
}