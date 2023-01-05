#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string num, typ;
    for(int i=0; i<n; i++)
    {
         cin >> num;
         cin >> typ;

         if(typ=="bin")
         {
             cout << std::stoi(num,0,10) << endl;
         }
         else if(typ=="dec")
         {

         }
         else if(typ=="hex")
         {

         }

    }
    return 0;
}
