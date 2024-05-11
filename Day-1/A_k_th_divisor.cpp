#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> div;
    for (int i = 1;i * i <= n;i++) 
    {
        if (n % i == 0) 
        {
            div.push_back(i);
            if ((n / i) != i) 
            {
                div.push_back(n / i);
            }
        }
    }
    sort(div.begin(), div.end());
    if(k>div.size())
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<div[k-1]<<'\n';
    }
    return 0;
}