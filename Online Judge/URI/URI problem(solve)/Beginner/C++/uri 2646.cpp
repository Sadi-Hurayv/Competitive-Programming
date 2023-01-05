#include<bits/stdc++.h>
using namespace std;

void help(char key, std::vector<char>cp1, std::vector<char>cp2, std::set<char>&temp_cp2,std::vector<char>&cp1_cpy, int n_cp)
{
    for(int k=0; k<n_cp; k++)
    {
        if(key==cp1[k] && key==cp1_cpy[k])
        {
            temp_cp2.insert(cp2[k]);
            cp1_cpy[k]='@';
            help(cp2[k],cp1,cp2,temp_cp2,cp1_cpy,n_cp);
        }
    }
}

int main()
{
    int n_cp, n_wp;
    std::vector<char>cp1, cp2, cp1_cpy;
    char fc, sc;
    string fstr, sstr;
    cin >> n_cp >> n_wp;

    ///character pair
    for(int i=0; i<n_cp; i++)
    {
        cin >> fc >> sc;
        cp1.push_back(fc);
        cp2.push_back(sc);
    }

    ///word pair
    for(int i=0; i<n_wp; i++)
    {
        cin >> fstr >> sstr;

        int j=0, flg=0;
        char fnl_c;

        if(fstr.size()!=sstr.size())
        {
            cout << "no\n";
        }
        else
        {
            while(j<fstr.size())
            {
                if(fstr[j]==sstr[j])
                {
                    flg=1;
                }
                else
                {
                    std::set<char>temp_cp2;
                    std::vector<char>cp1_cpy(cp1);
                    for(int k=0; k<n_cp; k++)
                    {
                        if(fstr[j]==cp1[k] && fstr[j]==cp1_cpy[k])
                        {
                            temp_cp2.insert(cp2[k]);
                            cp1_cpy[k]='@';///dummy
                            help(cp2[k],cp1,cp2,temp_cp2,cp1_cpy,n_cp);

                        }
                    }

                    if(temp_cp2.find(sstr[j])!=temp_cp2.end())
                    {
                        flg=1;
                    }
                    else
                    {
                        flg=0;
                        break;
                    }
                }
                j++;
            }

            if(flg==1)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }

    return 0;
}


