
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i==j || i==k || j==k){
                    continue;
                }
                else{
                    if((arr[i]-arr[j])%arr[k]!=0){
                        flag=1;
                        break;
                    }
                }
            }
        }
    }

    if(flag){
        cout << "no";
    }
    else{
        cout << "yes";
    }
    return 0;
}
