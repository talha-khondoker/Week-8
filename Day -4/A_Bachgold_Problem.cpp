#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<(n/2)<<'\n';
        for(int i=0; i<(n/2); i++)
        {
            cout<<2<<" ";
        }
        cout<<'\n';
    }
    else
    {
        cout<<(n/2)<<'\n';
        for(int i=0; i<(n/2)-1; i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<'\n';
    }
    return 0;
}