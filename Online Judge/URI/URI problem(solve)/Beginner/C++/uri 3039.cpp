#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b=0, g=0;
    string name, sex;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> name >> sex;
        if(sex=="M")
            b++;
        else if(sex=="F")
            g++;
    }
    cout << b << " carrinhos\n" << g << " bonecas\n";
    return 0;
}
