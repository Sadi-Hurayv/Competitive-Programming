#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string chiper;
    std::map<string, char>key = {
                            {".", 'a'},
                            {"..", 'b'},
                            {"...", 'c'},
                            {". .", 'd'},
                            {".. ..", 'e'},
                            {"... ...", 'f'},
                            {". . .", 'g'},
                            {".. .. ..", 'h'},
                            {"... ... ...", 'i'},
                            {". . . .", 'j'},
                            {".. .. .. ..", 'k'},
                            {"... ... ... ...", 'l'},
                            {". . . . .", 'm'},
                            {".. .. .. .. ..", 'n'},
                            {"... ... ... ... ...", 'o'},
                            {". . . . . .", 'p'},
                            {".. .. .. .. .. ..", 'q'},
                            {"... ... ... ... ... ...", 'r'},
                            {". . . . . . .", 's'},
                            {".. .. .. .. .. .. ..", 't'},
                            {"... ... ... ... ... ... ...", 'u'},
                            {". . . . . . . .", 'v'},
                            {".. .. .. .. .. .. .. ..", 'w'},
                            {"... ... ... ... ... ... ... ...", 'x'},
                            {". . . . . . . . .", 'y'},
                            {".. .. .. .. .. .. .. .. ..", 'z'}
                                };
    while(cin >> n)
    {
        cin.ignore();
        for(int i=0; i<n; i++)
        {
//            cout << n << "-->" << i << endl;
            getline(cin,chiper);
            auto it=key.find(chiper);
            cout << it->second << endl;

        }
    }



    return 0;
}

//    int ds=1, nd;
//    for(int i=0; i<26; i++)
//    {
//        nd=(i%3)+1;
////        printf("{\'%c\', ",i+97);
//        cout << "{\"";
//        for(int j=0; j<ds; j++)
//        {
//            for(int k=0; k<nd; k++)
//            {
//                cout << ".";
//            }
//            if(j<ds-1)
//            {
//                cout << " ";
//            }
//        }
//        cout << "\", ";
//        printf("\'%c\'},",i+97);
//        if(i%3==2)
//        {
//            ds++;
//        }
//        cout << endl;
//    }
