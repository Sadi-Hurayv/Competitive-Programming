#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string leg, ans;
    while(getline(cin,leg))
    {
        if(leg=="esquerda")
        {
            ans="ingles";
        }
        else if(leg=="direita")
        {
            ans="frances";
        }
        else if(leg=="nenhuma")
        {
            ans="portugues";
        }
        else if(leg=="as duas")
        {
            ans="caiu";
        }
        cout << ans << endl;
    }
    return 0;
}
