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
        ll a, b;
        cin >> a >> b;
        ll gcd=0;
        bool flag=true;
        ll k=0;
        while (true)
        {
            gcd=__gcd(a,b);
            b/=gcd;
            // cout<<b<<" ";
            if(b==1)
            {
                k=1;
                break;
            }
            if(gcd==1)
            {
                flag=true;
                break;
            }
        }
        if(k==1)
        {
            cout<<"Yes"<<'\n';
        }
        else
        {
            cout<<"No"<<'\n';
        }
    }
    
    return 0;
}



// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll tc;
//     cin>>tc;
//     while (tc--)
//     {
//         ll a, b;
//         cin >> a >> b;
//     map<ll, ll> cnt2;
//     for (int i = 2;i * i <= b;i++) 
//     {
//         if (b % i == 0) 
//         {
//             while (b % i == 0) 
//             {
//                 cnt2[i]++;
//                 b /= i;
//             }
//         }
//     }
//     if (b > 1) 
//     {
//         cnt2[b]++;
//     }
//     bool flag=false;
//     for (auto [x, y]: cnt2) 
//     {
//         if(a%x==0)
//         {
//             flag=true;
//             break;
//         }
//     }
//     if(flag)
//     {
//         cout<<"Yes"<<'\n';
//     }
//     else
//     {
//         cout<<"No"<<'\n';
//     }
//     }
    
//     return 0;
// }