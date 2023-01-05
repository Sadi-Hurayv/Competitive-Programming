#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    int asci, freq;
} frequency;

frequency arr[100];

bool cmp(frequency a, frequency b)
{
    if(a.freq==b.freq)
    {
        return a.asci > b.asci;
    }
    else
    {
        return a.freq<b.freq;
    }
}

int main()
{
    string str;
    int flag=0;
    while(getline(cin, str))
    {
        if(flag==1)
        {
            cout << endl;
        }
        flag=1;
        std::map<char, int> stnc;


        for(int i=0; i<str.length(); i++)
        {
            stnc[str[i]]++;
        }

        std::map<char, int>::iterator it;
        int k=0;
        for(it=stnc.begin(); it!=stnc.end(); ++it)
        {
//            cout << it->first << "->" << it->second << endl;
            arr[k].asci=it->first;
            arr[k].freq=it->second;
            k++;
        }

        stable_sort(arr, arr+k,cmp);

        for(int i=0; i<k; i++)
        {
            cout << arr[i].asci << " " << arr[i].freq << endl;
        }
//        cout << str << endl;
    }

    return 0;
}
