#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    double total_distance=0.00;
    double h,m,s;
    double spd;
    double totalSecond,previousSecond=0,current;
    while(getline(cin,str))
    {
        h=(str[1]-48)+((str[0]-48)*10);
        m=(str[4]-48)+((str[3]-48)*10);
        s=(str[7]-48)+((str[6]-48)*10);
        totalSecond = (h*3600) + (m*60) + s;

        current = totalSecond - previousSecond;
        previousSecond = totalSecond;
        total_distance += (spd*current) / 3600;

        if(str.length()==8)
        {
            printf("%s %.2lf km\n",str.c_str(),total_distance);
        }
        else
        {
            spd=0;
            for(int i=9;i<str.length();i++)
            {
                spd*=10;
                spd = spd + (str[i]-48);
            }
        }
    }
    return 0;
}
