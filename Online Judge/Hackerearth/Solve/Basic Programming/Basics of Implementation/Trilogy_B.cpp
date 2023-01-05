#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int A_1, Sum_116, Sum_343, A_116, A_343, diff, common_difference, Sum_11631;

    A_1=0;

    Sum_116=220922;

    Sum_343=1937950;

    A_116=(Sum_116*2)/116;

    A_343=(Sum_343*2)/343;

    diff=(A_343+A_1)-(A_116+A_1);

    common_difference=(diff)/(343-116);

    A_1=(((Sum_116*2)/116)-((common_difference)*(116-1)))/2;

    Sum_11631=(((2*A_1)+(common_difference*11630))*11631)/2;

    cout << Sum_11631 << "\n";

    return 0;
}

