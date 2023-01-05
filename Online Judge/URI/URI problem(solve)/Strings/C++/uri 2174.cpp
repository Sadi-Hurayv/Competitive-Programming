#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    std::set<string>pokemon;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        pokemon.insert(s);
    }
    cout << "Falta(m) " << 151-pokemon.size() << " pomekon(s)." << endl;

    return 0;
}
