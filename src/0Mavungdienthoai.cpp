#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define int long long
#define pii pair<int,int>
#define pb push_back
#define pf push_front
#define rd(x) fixed<<setprecision(x)
const int MOD=1e9+7;
using namespace std;
minhdan()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 map<int, string> m;

m[61] = "Brasilia";

m[71] = "Salvador";
m[11] = "Sao Paulo";
m[21] = "Rio de Janeiro";

m[32] = "Juiz de Fora";
m[19] = "Campinas";
m[27] = "Vitoria";
m[31] = "Belo Horizonte";
int n; cin >> n;
if(m[n] == "") cout << "DDD nao cadastrado";
else cout << m[n];
    return 0;
}