#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    cin >> a >> b;
    if(a+b>n)
    {
        cout << "Deixa para amanha!" << endl;
    }
    else
    {
        cout << "Farei hoje!" << endl;
    }
    return 0;
}
