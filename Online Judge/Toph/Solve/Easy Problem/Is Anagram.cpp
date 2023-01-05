#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);

    int arr1[26]={0}, arr2[26]={0}, i, pos, flag;

    ///for 1st word
    i=0;
    while (s1[i] != '\0') {
      if (s1[i] >= 'a' && s1[i] <= 'z') {
         pos = s1[i] - 'a';
         ++arr1[pos];
      }
      ++i;
    }

    ///for 2nd word
    i=0;
    while (s2[i] != '\0') {
      if (s2[i] >= 'a' && s2[i] <= 'z') {
         pos = s2[i] - 'a';
         ++arr2[pos];
      }
      ++i;
    }

    ///compare
    flag=1;
    for(i=0; i<26; i++)
    {
       if(arr1[i]!=arr2[i])
       {
           flag=0;
           break;
       }
    }

    ///final result
    if(flag)
       cout << "Yes";
    else
        cout << "No";

    return 0;
}
