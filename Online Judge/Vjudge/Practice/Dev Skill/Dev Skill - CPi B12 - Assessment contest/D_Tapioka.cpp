#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, s3, s, k1, k2;
    k1="bubble";
    k2="tapioka";
    s="";
    cin >> s1 >> s2 >> s3;

    if(s1!=k1 && s1!=k2){
        s+=s1;
        s+=" ";
    }

    if(s2!=k1 && s2!=k2){
        s+=s2;
        s+=" ";
    }

    if(s3!=k1 && s3!=k2){
        s+=s3;
    }

    if(s==""){
        cout << "nothing";
    }
    else{
        cout << s;
    }

    return 0;
}

