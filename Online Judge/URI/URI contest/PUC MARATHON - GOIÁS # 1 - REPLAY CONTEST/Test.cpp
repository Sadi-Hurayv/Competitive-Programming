//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    vector<int> g1;
//
//    for (int i = 1; i <= 5; i++)
//        g1.push_back(i);
//
//    cout << "Output of begin and end: ";
//    for (int i = 0; i < g1.size(); ++i)
//    {
//        cout << g1[i] << " ";
//    }
//    //g1.insert(g1.begin(), 6);
//    int temp = g1.back();
//   // cout << g1.back() << endl;
//    g1.pop_back();
//    //cout << g1.back() << endl;
//    g1.insert(g1.begin(),temp);
//
////    g1.push_back(g1.front() );
////    g1.erase(g1.begin());
//
//    cout << "Output of begin and end: ";
//    for (int i = 0; i < g1.size(); ++i)
//        cout << g1[i] << " ";
//
//
//    return 0;
//}
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(void) {
//   std::vector<int> v;
//   bool result;
//   v.push_back(1);
//   v.push_back(2);
//   v.push_back(3);
//   v.push_back(4);
//   v.push_back(5);
//
//   result = binary_search(v.begin(), v.end(), 3);
//
//   if (result == true)
//      cout << "Element 3 exist in vector." << endl;
//
//   v[1] = 10;
//
//   result = binary_search(v.begin(), v.end(), 3);
//
//   if (result == false)
//      cout << "Element 3 doesn't exist in vector." << endl;
//
//   return 0;
//}

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int d;
    cin >> d;
    double tl=0;
    cout << "TL: " << tl << endl;
    cout << pow(d,0.727272727272) << endl;
    tl+=(pow(d,0.727272727272));

     cout << "TL: " << tl << endl;
    cout << pow(d,0.27272727) << endl;
    tl=tl*(pow(d,0.27272727));


     cout << "TL: " << tl << endl;
     tl+=(4-d);
    cout << "TL: " << tl << endl;

    cout << (double)(pow(d,0.727272727272)*pow(d,0.27272727)-d+4);
}


























