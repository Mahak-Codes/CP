#include <bits/stdc++.h>
using namespace std;

template <int n>
struct Fact{
    static const int value=n*Fact<n-1>::value;
};
template<>
struct Fact<0>
{
    static const int value=1;
};

int main(){
    const int n=5;
    cout<<"Factorial of "<<n<<" is "<<Fact<n>::value<<endl;
    cout << "Factorial of " << n << " is " << tgamma(n + 1) << endl;
    
}