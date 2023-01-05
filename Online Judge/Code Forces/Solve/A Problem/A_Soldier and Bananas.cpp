#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int w, n, k, borow;
    cin >> k >> n >> w;
    borow=(((w*(w+1))/2)*k)-n;
    if(borow<0)
        borow=0;
    cout << borow << endl;
    return 0;
}
