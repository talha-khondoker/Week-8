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
        ll a, b,l;
        cin>>a>>b>>l;
        ll ans=0, x=0;
        set<ll> k;
        while(true)
        {
        if(int(pow(a,x))>l)break;
        if((l%int(pow(a,x)))!=0)break;
        ll curr=l/int(pow(a,x));
        k.insert(curr);
        while(curr%b==0)
        {
            curr/=b;
            k.insert(curr);
        }
        x++;
        }
    cout<<k.size()<<"\n";
    }
    
    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// vector<ll> div(ll l)
// {
//     vector<ll> v;
//     for(int i=1; i*i<=l; i++)
//     {
//         if(l%i==0)
//         {
//             v.push_back(i);
//             if ((l / i) != i) 
//             {
//                 v.push_back(l / i);
//             }
//         }
//     }
//     return v;
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll tc;
//     cin>>tc;
//     while (tc--)
//     {
//         ll a, b, l;
//         cin>>a>>b>>l;
//         vector<ll> k=div(l);
//         sort(k.begin(), k.end());
//         ll tmp;
//         vector<ll> x, y;
//         for(ll i=0; i<=20; i++)
//         {
//             tmp=pow(a, i);
//             if(tmp<=1e6)
//             {
//                 x.push_back(tmp);
//             }
//             else
//             {
//                 break;
//             }
//         }
//         for(ll i=0; i<=20; i++)
//         {
//             tmp=pow(b, i);
//             if(tmp<=1e6)
//             {
//                 y.push_back(tmp);
//             }
//             else
//             {
//                 break;
//             }
//         }
//         ll cnt=0;
//         for(ll i=0; i<(ll)k.size(); i++)
//         {
//             bool flag=false;
//             for(ll j=0; j<(ll)x.size(); j++)
//             {
//                 for(ll z=0; j<(ll)y.size(); z++)
//                 {
//                     if(k[i]*x[j]*y[z] == l)
//                     {
//                         cnt++;
//                         flag=true;
//                         break;
//                     }
//                 }
//                 if(flag)
//                 {
//                     break;
//                 }
//             }
//         }
//         cout<<cnt<<'\n';
//     }
    
//     return 0;
// }