#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
vector<string> vertexNames;
map<string, int> vertexNumbers;

int main()
{
    int vertex, edge, source, destination, weight, cnt;
    string str, str1, str2;
    cin >> vertex >> edge;

    vector<PII> graph[vertex+1];
    PII p;

//    for(int i=0; i<vertex; i++)
//    {
//        cin >> str;
//        vertexNames.push_back(str);
//        vertexNumbers[str]=i;
//    }

    vertexNames.push_back("Dummy");
    cnt=0;
    for(int i=0; i<edge; i++)
    {
        cin >> str1 >> str2 >> weight;

        if(vertexNumbers[str1]==0)
        {
            vertexNames.push_back(str1);
            cnt++;
            vertexNumbers[str1]=cnt;
        }
        if(vertexNumbers[str2]==0)
        {
            vertexNames.push_back(str2);
            cnt++;
            vertexNumbers[str2]=cnt;
        }

        source=vertexNumbers[str1];
        destination=vertexNumbers[str2];


        p.first=destination;
        p.second=weight;
        graph[source].push_back(p);

        /// For bi-derectional graph below section should be added.
        /// But for directional graph above section is enough.
        p.first=source;
        p.second=weight;
        graph[destination].push_back(p);
    }

    for(int i=1; i<=vertex; i++)
    {
        cout << vertexNames[i] << " ---- ";
        for(int j=0; j<graph[i].size(); j++)
        {
            cout << vertexNames[graph[i][j].first] << "-->" << graph[i][j].second << "  ";
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}
