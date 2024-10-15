#include <iostream>
#include <queue>
#include <cstring>
#define ll long long
#define db double

using namespace std;

const int MAX_X = 200;

struct diem
{
    int x, y;
};
int solve(int a, int b, diem r, int dx, int dy, int c)
{
    int cx[] = {-a, a, a, -a, b, b, -b, -b};
    int cy[] = {-b, -b, b, b, a, -a, a, -a};
    bool v[MAX_X+5][MAX_X+5] = {};
    diem h, k, g;
    int res = 0;
    queue<diem> q;
    r.x += MAX_X / 2;
    r.y += MAX_X / 2;
    v[r.x][r.y] = true;
    q.push(r);
    while (!q.empty())
    {
        int l = q.size();
        for (int i = 0; i < l; i++)
        {
            k = q.front();
            q.pop();
            if (k.x - MAX_X / 2 == dx and k.y - MAX_X / 2 == dy)
                return res;
            for (int j = 0; j < 8; j++)
            {
                h.x = k.x + cx[j];
                h.y = k.y + cy[j];
                if (!v[h.x][h.y] and h.x >= 0 and h.x < MAX_X and h.y >= 0 and h.y < MAX_X)
                {
                    v[h.x][h.y] = true;
                    q.push(h);
                }
            }
        }
        res++;
        if (res > c)
            return -1;
    }
    return -1;
}
main()
{
 int t; cin >> t;
 while(t--)
 {
  int a, b, dx, dy, k; cin >> a >> b;
  diem r; cin >> r.x >> r.y;
  cin >> dx >> dy >> k;
        int res = solve(a, b, r, dx, dy, k);
        if(res == -1) cout << "NO" << endl;
        else cout << res << endl;
 }
    return 0;
}