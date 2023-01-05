#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    string word;
} sentence;

sentence stnc[55];

bool cmp(sentence a, sentence b)
{
    return a.word.size()>b.word.size();
}

int main()
{
    int n;
    string str, tmp_word;
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; i++)
    {

        getline(cin, str);
//        cout << str << endl;

        tmp_word="";
        int  k=0;

        for(auto x : str)
        {
            if(x==' ')
            {
                stnc[k].word=tmp_word;
                k++;
                tmp_word="";
            }
            else
            {
                tmp_word=tmp_word+x;
            }
        }
        stnc[k].word=tmp_word;
        k++;

        stable_sort(stnc,stnc+k, cmp);

        for(int j=0; j<k; j++)
        {
            if(j==k-1)
            {
                cout << stnc[j].word << endl;
            }
            else
            {
                cout << stnc[j].word << " ";
            }

        }
        str.clear();
    }
    return 0;
}
