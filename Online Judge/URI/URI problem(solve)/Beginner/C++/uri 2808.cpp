#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    string src, des;
    cin >> src >> des;
    if(abs(src[0]-des[0])==1 && abs(src[1]-des[1])==2)
    {
        cout << "VALIDO" << endl;
    }
    else if(abs(src[0]-des[0])==2 && abs(src[1]-des[1])==1)
    {
        cout << "VALIDO" << endl;
    }
    else
    {
        cout << "INVALIDO" << endl;
    }
    return 0;
}
