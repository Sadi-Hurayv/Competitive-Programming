#include<bits/stdc++.h>
#define M_E 2.71828182845904523536
#define M_PI 3.141592654
using namespace std;
int main()
{
    long long int n;
    unsigned long long int digit;
    double tmp_digit=0;
    cin >> n;
    tmp_digit=n * log10(n/M_E) + log10(2*n*M_PI)/2.00;
    digit=floor(tmp_digit)+1;
    cout << digit << endl;
    return 0;
}
