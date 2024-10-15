#include "bits/stdc++.h"
#define ll long long
#define db double
using namespace std;
int main()
{
    string s; cin >> s;
    int n = s.size();
    int a[n];
    for(int i = 0; i < n; i++)
    {
        a[i] = s[i] - '0';
    }
    int t; cin >> t;
    while(t--)
    {
        int q; cin >> q;
        deque<int> d;
        d.push_back(a[0]);
        for(int i = 1; i < n; i++)
        {
            while(d.empty() == false and d.back() < a[i] and q > 0)
                {
                    d.pop_back();
                    q--;
                }
            d.push_back(a[i]);
        }
        while(q--)
     {
      d.pop_back();
     }
        while(!d.empty())
        {
            cout << d.front();
            d.pop_front();
        }
        cout << endl;
    }
    return 0;
}