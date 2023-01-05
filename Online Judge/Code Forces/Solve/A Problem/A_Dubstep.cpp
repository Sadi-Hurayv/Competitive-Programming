#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, p="WUB";

    cin >> s;
    std::string::size_type p_len, s_len, nxt;
    p_len=p.length();
    s_len=s.length();
    for(std::string::size_type i=s.find(p); i!=std::string::npos; i=s.find(p)) ///std::string::size_type is basically used store the length of the string, no matter how long the string is and the size of the string not fit in integer.
    {
        s.erase(i, p_len);
        nxt=s.find(p);
        if(i!=0 && i!=nxt)
            s.insert(i," ");
    }


    ///another approach
//    bool found=0;
//	for(int i=0; i<s.size(); i++) {
//		if(i+2<s.size() && s.substr(i,3)=="WUB") {
//			if(!found) {
//				s.erase(i,3);
//				--i;
//			}
//			else {
//				s.replace(i,3," ");
//			}
//		}
//		else {
//			found=1;
//		}
//	}

    cout << s << "\n";

    return 0;
}
