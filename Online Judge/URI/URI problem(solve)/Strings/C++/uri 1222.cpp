#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    int w, l, ch, pc, lc, chc;
    while(cin >> w >> l >> ch)
    {
        pc=0;
        lc=0;
        chc=0;
        string arr[w];
        for(int i=0; i<w; i++)
        {
            cin >> arr[i];
            if(i==w-1)
            {
                chc+=arr[i].size();
                if(chc>ch)
                {
                    lc=lc+2;
                }
                else
                {
                    lc++;
                }

            }
            else
            {
                chc+=arr[i].size();
                if(chc>ch)
                {
                    lc++;
                    chc=0;
                    chc=arr[i].size();
                    if(chc==ch)
                    {
                        lc++;
                        chc=0; ///to count space
                    }
                    else if(chc+1==ch)
                    {
                        lc++;
                        chc=0;
                    }
                    else
                    {
                        chc++; ///to count space
                    }
                }
                else if(chc==ch)
                {
                    lc++;
                    chc=0; ///to count space
                }
                else if(chc+1==ch)
                {
                    lc++;
                    chc=0;
                }
                else
                {
                    chc++; ///to count space
                }
            }
            if(lc%l==0)
            {
                pc=lc/l;
            }
            else
            {
                pc=(lc/l)+1;
            }

            //cout << chc << endl;
        }
        cout << pc << endl;
    }
    return 0;
}
