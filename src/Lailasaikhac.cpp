#include<bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast")
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll MOD = 1000000007;
const ll MAX = 1e6;

// http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
// freopen("Output.txt", "w", stdout);
// freopen("Error.txt", "w", stderr);

int LowerToGreater(const void* a, const void* b)
{
    const ll* x = (ll*) a;
    const ll* y = (ll*) b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}

void insertArr(long long A[], long long n)
{
 for (long long i = 0; i < n; i++) cin >> A[i];
}

void printArr(long long *A, long long n)
{
 for (long long i = 0; i < n; i++) cout << A[i] << " ";
}

map <ll, ll> Marked;

int main()
{
 
  //freopen("Input.txt", "r", stdin);
 std::ios::sync_with_stdio(NULL); std::cin.tie(0); std::cout.tie(0);
 ll t; t = 1;
    while(t--)
    {
        ll n; cin >> n;
        ll Arr[n], sum = 0; 
        for (ll i = 0; i < n; i++)
        {
            cin >> Arr[i]; 
        }
        qsort(Arr, n, sizeof(ll), LowerToGreater);
        
        for (ll i = 1; i < n; i++) Arr[i] -= Arr[0];
  for (ll i = 1; i < n; i++) sum += Arr[i];
        ll subArr[n];

        subArr[0] = 0;
        subArr[1] = Arr[1];
        
        for (ll i = 2; i < n; i++)
        {
            subArr[i] = Arr[i] - Arr[i-1];
        }
        

        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            sum -= (subArr[i]*(n-i));
            ans += sum;
        }
        cout << ans;
     
    }
}