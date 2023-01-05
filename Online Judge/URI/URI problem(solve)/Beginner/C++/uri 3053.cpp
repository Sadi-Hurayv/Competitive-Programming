#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n, cng;
    cin >> n;
    char pos;
    cin >> pos;

    for(int i=0; i<n; i++)
    {
        cin >> cng;
        if(pos=='A' && cng==1)
        {
            pos='B';
        }
        else if(pos=='B' && cng==1)
        {
            pos='A';
        }
        else if(pos=='B' && cng==2)
        {
            pos='C';
        }
        else if(pos=='C' && cng==2)
        {
            pos='B';
        }
        else if(pos=='A' && cng==3)
        {
            pos='C';
        }
        else if(pos=='C' && cng==3)
        {
            pos='A';
        }
    }
            cout << pos << endl;


    return 0;
}
