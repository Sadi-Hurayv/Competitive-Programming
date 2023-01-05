#include<iostream>
using namespace std;
int main()
{
    long int num;

    cin >> num;
    if(num%2==0)
        cout << (num+2) << endl;
    else
        cout << (num+1) << endl;
    return 0;
}
