#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    while(cin >> n, n!=0)
    {
        queue<int>q;
        for(int i=1; i<=n; i++)
        {
            q.push(i);
        }
        cout << "Discarded cards: ";
        while(q.size()!=1)
        {
            if(q.size()==2)
            {
                cout << q.front();
                q.pop();
                temp=q.front();
            }
            else
            {
                cout << q.front() << ", ";
                q.pop();
                temp=q.front();
                q.pop();
                q.push(temp);
            }
        }
        cout << endl;
        cout << "Remaining card: " << temp << endl;
    }
    return 0;
}
