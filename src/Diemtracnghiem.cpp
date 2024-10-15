#include "bits/stdc++.h"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, s1;
    cin >> s >> s1;
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s1[i])
            cnt++;
    }
    double res = static_cast<double>(cnt) * 10 / n;
    res = round(res * 10.0) / 10.0;
    cout << fixed << setprecision(1) << res;
    return 0;
}