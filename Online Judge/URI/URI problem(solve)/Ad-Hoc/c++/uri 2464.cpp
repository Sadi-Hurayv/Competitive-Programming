#include<bits/stdc++.h>
using namespace std;
int main()
{
    string key, chipher;
    cin >> key;
    cin >> chipher;
    int i=0;
    while(chipher[i]!='\0')
    {
        cout << key[chipher[i]-'a'];
        i++;
    }
    cout << endl;
    return 0;
}
