#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, p, quantity;
    std::map<string,double>item;
    string it_name;
    double it_price, ttl_price;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        ttl_price=0;
        cin >> m;
        for(int j=0; j<m; j++)
        {

            cin >> it_name >> it_price;
            item.insert(pair<string,double>(it_name,it_price));
        }

        cin >> p;
        for(int j=0; j<p; j++)
        {
            cin >> it_name >> quantity;
            std::map<string,double>::iterator it;
            it=item.find(it_name);
            ttl_price+=(it->second*quantity);
        }

        cout << "R$ " << setprecision(2) << fixed << ttl_price << endl;
        item.clear();
    }
    return 0;
}
