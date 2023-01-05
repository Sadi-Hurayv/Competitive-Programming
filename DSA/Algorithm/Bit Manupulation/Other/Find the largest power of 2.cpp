#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;

    n=n|(n>>1); ///2 bit
    n=n|(n>>2); ///4 bit
    n=n|(n>>4); ///8 bit
    n=n|(n>>8); ///16 bit
    n=n|(n>>16); ///32 bit
    // n=n|(n>>32); ///64 bit

    cout << n << endl;
    n=(n+1)>>1;

    cout << n << "\n";

    return 0;
}
