#include "iostream"
#include "iomanip"
#define ll long long
#define db double
#define rd(x) fixed<<setprecision(x)

using namespace std;

int buoc = 1;

void backtrack(int n, char a, char b, char c){
 if(n>1) backtrack(n-1, a, c, b);
 cout<<"Buoc"<<buoc++<<" Chuyen dia "<< n<<" tu " <<a<<" sang "<<b<<endl;
 if(n>1) backtrack(n-1, c, b, a);
}

int main()
{
 int n; cin>>n;
 backtrack(n,'A','B','C');
    return 0;
}