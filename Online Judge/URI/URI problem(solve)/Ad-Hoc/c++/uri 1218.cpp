#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, st, m, f,c=0;
    char ch1, ch2;
    while(scanf("%d",&s)!=EOF)
    {
        if(c != 0)
            printf("\n");
        m=0;
        f=0;
        while(scanf("%d %c%c",&st,&ch1,&ch2))
        {
            if(s==st)
            {
                if(ch1=='M')
                {
                    m++;
                }
                else if(ch1=='F')
                {
                    f++;
                }
            }
            if(ch2=='\n')
            {
                break;
            }
//            cout << st << "-" << ch1 << "-" << ch2 << endl;
        }
        c++;
        cout << "Caso " << c << ":" << endl << "Pares Iguais: " << f+m << endl << "F: " << f << endl << "M: " << m << endl;


    }

    return 0;
}
