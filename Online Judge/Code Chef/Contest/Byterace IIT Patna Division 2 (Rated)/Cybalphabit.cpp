#include<bits/stdc++.h>
using namespace std;
int main()
{

    ///not solved
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;

    int arr[26];
    for(int i=0; i<26; i++)
    {
        arr[i]=pow(2,i);
    }

    cin >> t;
    while(t--)
    {
        //cout << "\n\n\n" << t << "\n\n\n";
        cin >> k >> n;
        vector<int> v(26);
        int tmp_k=k;
        int tmp_n=n;
        int f=1;

        //cout << "\n\n" << n << "<-->"<< k << "\n\n";

        while(tmp_k>0 && tmp_n>0)
        {
            int cur_id;
            for(int i=0; i<26; i++)
            {
                if(arr[i]*tmp_k>=tmp_n)
                {
                    cur_id=i;
                    break;
                }
            }

            //cout << "TEST\n\n";
            if(tmp_k==1 && arr[cur_id]>tmp_n)
            {
                f=0;
                break;
            }
            else if(arr[cur_id] * tmp_k == tmp_n)
            {
                v[cur_id]+=tmp_k;
                tmp_k=0;
                tmp_n=0;
            }
            else if(cur_id==0 && arr[cur_id]*tmp_k>tmp_n)
            {
                    f=0;
                    break;
            }
            else
            {
                v[cur_id]++;
                tmp_k--;
                tmp_n-=arr[cur_id];
            }
        }

        if(f)
        {
            for(int i=0; i<26; i++)
            {
                if(v[i]>0)
                {
                    for(int j=0; j<v[i]; j++)
                    {
                        cout << char('a'+i);
                    }
                }
            }
            cout << "\n";

        }
        else
        {
            cout <<"-1\n";
        }

    //cout << "\n\n\n" << t << "\n\n\n";
    }

    return 0;
}

