#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[10];
    for(int i=0; i<10; i++)
        cin >> arr[i];

    int ans=arr[arr[arr[0]]];
    cout << ans << "\n";

    return 0;
}
