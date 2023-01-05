#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    char name[50];
    for(int i=0; i<n; i++){
        cin >> name;
        cout << name << ": F\n";
    }

    return 0;
}

