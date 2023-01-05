#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    bool pri, que, sta;

    while(cin >> n)
    {
        pri=que=sta=true;
        priority_queue<int>pq;
        queue<int>q;
        stack<int>s;

        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            if(x==1)
            {
                pq.push(y);
                q.push(y);
                s.push(y);
            }
            else
            {
                if(s.top()!=y)
                    sta=false;

                if(q.front()!=y)
                    que=false;

                if(pq.top()!=y)
                    pri=false;

                s.pop();
                q.pop();
                pq.pop();
            }
        }

        if( (pri && que && sta) || (!pri && que && sta) || (pri && !que && sta) || (pri && que && !sta) )
            cout << "not sure" << endl;
        else if( !pri && !que && sta )
            cout << "stack" << endl;
        else if( pri && !que && !sta )
            cout << "priority queue" << endl;
        else if( !pri && que && !sta )
            cout << "queue" << endl;
        else
            cout << "impossible" << endl;

    }

    return 0;
}

