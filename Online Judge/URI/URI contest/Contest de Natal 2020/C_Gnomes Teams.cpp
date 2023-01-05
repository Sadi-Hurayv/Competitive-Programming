#include <bits/stdc++.h>
using namespace std;

typedef struct Santa
{
    string name;
    int age;
}Santa;

bool compare(Santa e1, Santa e2)
{
    if(e1.age==e2.age)
    {
        return e1.name < e2.name;
    }
    else
    {
        return e1.age > e2.age;
    }
}

int main()
{
    int n;
    cin >> n;
    Santa santa[n];
    for(int i=0; i<n; i++)
    {
        cin >> santa[i].name >> santa[i].age;
        //std::transform(santa[i].name.begin(), santa[i].name.end(), santa[i].m_name.begin(),::tolower);
        //santa[i].m_name=santa[i].name;
    }

    sort(santa, santa+n, compare);


    for(int i=0; i<n/3; i++)
    {
        if(i!=0)
            cout << "\n";

        cout << "Time " << i+1 << "\n";

        for(int j=i; j<n; j+=n/3)
        {
            cout << santa[j].name << " " << santa[j].age << "\n";
        }
    }
    cout << "\n";

    return 0;
}
