#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin.ignore();
    for(int i=0; i<n; i++)
    {

        getline(cin, s);
        cout << s << endl;
//        s.clear();

    }
    return 0;
}



//int mdc(int a,int b);
//int main()
//{
//    int c=mdc(-10,8);
//    cout << c;
//}
//
//int mdc(int a,int b)
//{
//    if(b == 0) return a;
//    else
//    return mdc(b,a%b);
//}
