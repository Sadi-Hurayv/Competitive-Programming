#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="abcdefghijklmnopqrstuvwxyz";
    string k_table[26]= {"abcdefghijklmnopqrstuvwxyz", "bcdefghijklmnopqrstuvwxyza", "cdefghijklmnopqrstuvwxyzab", "defghijklmnopqrstuvwxyzabc", "efghijklmnopqrstuvwxyzabcd", "fghijklmnopqrstuvwxyzabcde", "ghijklmnopqrstuvwxyzabcdef", "hijklmnopqrstuvwxyzabcdefg", "ijklmnopqrstuvwxyzabcdefgh", "jklmnopqrstuvwxyzabcdefghi", "klmnopqrstuvwxyzabcdefghij", "lmnopqrstuvwxyzabcdefghijk", "mnopqrstuvwxyzabcdefghijkl", "nopqrstuvwxyzabcdefghijklm", "opqrstuvwxyzabcdefghijklmn", "pqrstuvwxyzabcdefghijklmno", "qrstuvwxyzabcdefghijklmnop", "rstuvwxyzabcdefghijklmnopq", "stuvwxyzabcdefghijklmnopqr", "tuvwxyzabcdefghijklmnopqrs", "uvwxyzabcdefghijklmnopqrst", "vwxyzabcdefghijklmnopqrstu", "wxyzabcdefghijklmnopqrstuv", "xyzabcdefghijklmnopqrstuvw", "yzabcdefghijklmnopqrstuvwx", "zabcdefghijklmnopqrstuvwxy"};
    string key, p_text;
    char c_text[100001], e_key[100001];
    int n;
    int p_len, k_len;

    cin >> key;
    cin >> n;

    k_len = key.size();
    cin.ignore();

    for(int k=0; k<n; k++)
    {
//        cin.ignore();
        getline(cin,p_text);

        p_len = p_text.size();


        int j=0;
        int flag=0;
        for(int i=0; i<p_len; i++)
        {
            ///Extend Key.........................
            if(i==0)
            {
                 if(p_text[i]=='a' || p_text[i]=='e' || p_text[i]=='i' || p_text[i]=='o' || p_text[i]=='u')
                 {
                     flag=1;
                 }
            }

            if(p_text[i]==' ')
            {
                e_key[i]=' ';
                //j=0;
                if(p_text[i+1]=='a' || p_text[i+1]=='e' || p_text[i+1]=='i' || p_text[i+1]=='o' || p_text[i+1]=='u')
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                }
            }
            else
            {
                if(flag==0)
                {
                    e_key[i]=key[j%k_len];
                    j++;
                }
                else
                {
                    e_key[i]='9'; ///for dummy only
                }

            }
        }
        e_key[p_len]='\0';


        ///Cipher text.............
        int c=0;
        for(int i=0; i<p_len; i++)
        {
            if(p_text[i]==' ')
            {
                if(i!=0 && i!=p_len-1)
                {
                    c_text[c]=' ';
                    c++;
                    while(p_text[i+1]==' ')
                    {
                        i++;
                    }
                }
            }
            else
            {
                if(e_key[i]=='9')
                {
                    c_text[c]=p_text[i];
                }
                else
                {
                    c_text[c]=k_table[e_key[i]-'a'][p_text[i]-'a'];
                }
                c++;

            }
        }
        c_text[c]='\0';
        cout << c_text << endl;
    }

    return 0;
}
