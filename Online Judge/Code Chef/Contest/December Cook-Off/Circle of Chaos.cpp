#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n_ss, n_sp, g, p, bound, fact, mx_fact;
    cin >> t;
    while(t--)
    {
        cin >> n_ss >> n_sp;
        g=0;
        for(int i=0; i<n_sp; i++)
        {
            cin >> p;
            g=__gcd(g,p);
        }

        if(sqrt(g)>n_ss)
            bound=n_ss;
        else
            bound=sqrt(g);

        mx_fact=INT_MIN;
        for(int i=bound; i>0; i--)
        {
            if(g%i==0)
            {
                fact=i;
                if(fact>mx_fact && fact<=n_ss)
                    mx_fact=fact;

                fact=g/i;
                if(fact>mx_fact && fact<=n_ss)
                    mx_fact=fact;
            }
        }

        cout << n_ss-mx_fact << "\n";
    }


    return 0;
}
