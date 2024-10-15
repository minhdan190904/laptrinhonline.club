#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int k = s.size();
    if (s[k-1] == '0' or s[k-1] == '5')
    {
        cout << "0";
        return 0;
    }
    queue<string> q1, q2;
    q1.push("6");
    q2.push("8");
    int i = 1;
    while (i == 1)
    {
        string top = q1.front();
        q1.pop();
        string t1 = top + "6", t2 = top + "8";
        q1.push(t1);
        if (stoll(t1) % n == 0)
        {
            cout << t1 << endl;
            break;
        }
        q1.push(t2);
        if (stoll(t2) % n == 0)
        {
            cout << t2 << endl;
            break;
        }
        string top2 = q2.front();
        q2.pop();
        string t12 = top2 + "6", t22 = top2 + "8";
        q2.push(t12);
        if (stoll(t12) % n == 0)
        {
            cout << t12 << endl;
            break;
        }
        q2.push(t22);
        if (stoll(t22) % n == 0)
        {
            cout << t22 << endl;
            break;
        }
    }
    return 0;
}