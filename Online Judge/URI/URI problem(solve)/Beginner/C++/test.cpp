//#include<bits/stdc++.h>
//using namespace std;
//
//long long int lcm(long long int a, long long int b)
//{
//    int gcd;
//    gcd=__gcd(a,b);
//    return (a/gcd)*b;
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    long long int a, b, c, m, position, actual_position, lcm_abc, lcm_ab, valid_member_per_lcm_ab, quotient, remainder, result, x, y, lcm_xy;
//    cin >> a >> b >> c >> m;
//
//    lcm_ab=lcm(a,b);
//    lcm_abc=lcm(lcm_ab,c);
//
//    //cout << "\nlcm_ab -- " << lcm_ab << "\nlcm_abc -- " << lcm_abc << "\n";
//
//    x=lcm_ab/a;
//    y=lcm_abc/a;
//    lcm_xy=lcm(x,y);
//
//    valid_member_per_lcm_ab=x-1;
//
//    //cout << "\nvalid_member_per_lcm_ab -- " << valid_member_per_lcm_ab << "\n";
//
//    while(m--)
//    {
//        cin >> position;
//
//        if(valid_member_per_lcm_ab!=0)
//        {
//            quotient = position / valid_member_per_lcm_ab;
//            remainder = position % valid_member_per_lcm_ab;
//
//            //cout << "\nquotient -- " << quotient << "\nremainder -- " << remainder << "\n";
//
//            if(remainder)
//                actual_position = (x*quotient)+remainder;
//            else
//                actual_position = (x*quotient)-1;
//
//            //cout << "\nactual_position -- " << actual_position << "\n";
//
//            actual_position -= actual_position / lcm_xy;
//            //cout << "\nactual_position -- " << actual_position << "\n";
//
//            result = actual_position * a;
//        }
//        else
//        {
//            result = position * lcm_abc;
//        }
//
//        cout << result << "\n";
//    }
//
//    return 0;
//}
//

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

typedef long long ll;

int main() {

    ll a, b, c, m, num;
    std::vector<ll> array;
    std::vector<ll> array2;

    std::cin >> a >> b >> c >> m;

    ll maxIndex = -1;

    for (ll i = 0; i < m; i++) {
        std::cin >> num;
        array.push_back(num);
        if (maxIndex < num) {
            maxIndex = num;
        }
    }

    ll index = 0;
    for (num = a; index <= maxIndex; num += a) {
        // Is the number meet our condition
        if ((num%a==0 && num%b!=0) || (num%c==0 && num%b==0 && num%c==0)) {
            array2.push_back(num);
            index++;
        }
    }

    for (auto &k : array) {
        std::cout << array2[k - 1] << "\n";
    }

    return 0;
}
