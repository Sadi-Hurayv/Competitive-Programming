#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p, jCount=0, pCount=0;
    string mov;
    cin >> mov;
    while(mov!= "ABEND")
    {
        cin >> p;
        if(mov=="SALIDA")
        {
            jCount++;
            pCount+=p;
        }
        else if(mov=="VUELTA")
        {
            jCount--;
            pCount-=p;
        }
        cin >> mov;
    }
    cout << pCount << "\n" << jCount << endl;
    return 0;
}

