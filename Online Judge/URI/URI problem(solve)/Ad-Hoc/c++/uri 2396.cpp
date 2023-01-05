#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int car, lap, sum, tmp, c;
     std::map<int, int>s;
     cin >> car >> lap;

     for(int i=0; i<car; i++)
     {
         sum=0;
         for(int j=0; j<lap; j++)
         {
             cin >> tmp;
             sum+=tmp;
         }
         s.insert(pair<int, int>(sum,i+1));
     }

     c=0;
     std::map<int, int>::iterator it;
     for(it=s.begin(); it!=s.end(); ++it)
     {
         cout << it->second << endl;
         c++;
         if(c==3)
            break;
     }

     return 0;
 }
