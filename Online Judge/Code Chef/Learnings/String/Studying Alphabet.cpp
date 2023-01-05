#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string key, wrd;
    int n, frq[26]={0};
    cin >> key;

    for(char c : key)
        frq[c-'a']=1;

    cin >> n;

    while(n--)
    {
        cin >> wrd;
        int f=1;
        for(char c : wrd)
        {
            if(!frq[c-'a'])
            {
                f=0;
                break;
            }
        }
        if(f)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
