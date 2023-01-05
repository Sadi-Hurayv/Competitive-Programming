#include<bits/stdc++.h>
using namespace std;

const int un=7;
const array<int,2>base={10,8};
int main()
{
    int n, ans=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        bool lucky=1;
        for(int b:base)
        {
            for(int j=i; j>0; j/=b)
            {
                lucky &= j%b != un;
            }
        ///Alternate
//            int num=i;
//            while(num)
//            {
//                lucky &= num%b!=un;
//                num/=b;
//            }
        }
        ans+=lucky; ///here lucky acts like a flag
    }
    cout << ans << "\n";

    return 0;
}

//int to_oct(int n)
//{
//    int oct=0;
//    while(n)
//    {
//        oct=(oct*10)+n%8;
//        n=n/8;
//    }
//    return oct;
//}
//
//int main()
//{
//    int n, ans=0;
//    string s="7";
//    cin >> n;
//    for(int i=1; i<=n; i++)
//    {
//        string is, os;
//        is=to_string(i);
//        os=to_string(to_oct(i));
//        if(!strstr(is.c_str(),s.c_str()) && !strstr(os.c_str(),s.c_str()))
//        {
//            ans++;
//        }
//    }
//    cout << ans << "\n";
//
//
//    return 0;
//}
