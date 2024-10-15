#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct comma_separator : std::numpunct<char> {
    virtual char do_decimal_point() const override {
        return ',';
    }
}; 

int main() {
    std::cout.imbue(std::locale(std::cout.getloc(), new comma_separator));

    double a[12]= {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00};
    long n;
    cin>>n;
    n+=1e-9;
    cout<<n<<"\n";
    for(int i=0; i<7; i++) {
        int t= n/a[i];
        if (i<6) {
            cout<< fixed << setprecision(2)<<t<<" to R$ "<< a[i]<<endl;
        } else {
            cout<< fixed << setprecision(2)<<t<<" to R$ "<< a[i]<<endl;
        }
        n=n-(t*a[i]);
    }

}