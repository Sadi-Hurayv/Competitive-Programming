#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
int main()
{
    int vertex, edge, source, destination, weight;
    cin >> vertex >> edge;

    std::vector<PII> graph[vertex];
    PII p;

    for(int i=0; i<edge; i++)
    {
        cin >> source >> destination >> weight;
        p.first=destination;
        p.second=weight;
        graph[source].push_back(p);

        /// For bi-derectional graph below section should be added.
        /// But for directional graph above section is enough.
        p.first=source;
        p.second=weight;
        graph[destination].push_back(p);
    }

    for(int i=0; i<vertex; i++)
    {
        cout << i << " ----  ";
        for(int j=0; j<graph[i].size(); j++)
        {
            cout << graph[i][j].first << "-->" << graph[i][j].second << "  ";
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}
