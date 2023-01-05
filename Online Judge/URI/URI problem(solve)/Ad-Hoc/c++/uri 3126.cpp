#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i])
            c++;
    }
    cout << c << endl;
    return 0;
}
