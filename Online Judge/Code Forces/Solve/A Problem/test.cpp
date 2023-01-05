//#include <iostream>     // std::cout
//#include <algorithm>    // std::partial_sort
//#include <vector>       // std::vector
//
//bool myfunction (int i,int j) { return (i<j); }
//
//int main () {
//  int myints[] = {9,3,7,6,5,4,3,2,1};
//  std::vector<int> myvector (myints, myints+9);
//
//  // using default comparison (operator <):
//  //std::partial_sort (myvector.begin(), myvector.begin()+5, myvector.end());
//
//  // using function as comp
//  //std::partial_sort (myvector.begin(), myvector.begin()+5, myvector.end(),myfunction);
//
//  std::stable_sort (myvector.begin(), myvector.end());
//
//  // print out content:
//  std::cout << "myvector contains:";
//  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
//    std::cout << ' ' << *it;
//  std::cout << '\n';
//
//  return 0;
//}
//#include <iostream>
//#include <iomanip>
//#include <boost/math/constants/constants.hpp>
//#include <boost/multiprecision/cpp_dec_float.hpp>
//
//using namespace std ;
//
//int main( )
//{
//using boost::multiprecision::cpp_dec_float_50 ;
//
//cpp_dec_float_50 num=cpp_dec_float_50( “1234.56593838732623723832”) ;
//
//cout << num << endl ;
//cout<< setprecision(20) << num << endl ;
//
///***Calculating Area of a circle ***/
//cpp_dec_float_50 radius=cpp_dec_float_50(“2.145”) ;
//
//cout<<“Area =” << boost::math::constants::pi<cpp_dec_float_50>() * radius * radius << endl ;
//
///***Setting the precision up to 50 digits****/
//cout<< “Area =” << setprecision(50) << boost::math::constants::pi<cpp_dec_float_50>() * radius * radius << endl ;
//
//cin.get();
//return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=583291, b, c=1000000000;
    b=a*a;
    c=c+7;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << b%c << endl;
    return 0;
}
