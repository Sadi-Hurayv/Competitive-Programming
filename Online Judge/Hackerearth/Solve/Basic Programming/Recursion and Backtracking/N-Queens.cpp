#include<bits/stdc++.h>
using namespace std;

bool is_Attack(int n, vector< vector<int> > &arr, int x, int y)
{
    for(int i=0; i<n; i++) /// For Row check
    {
        if(arr[x][i]==1)
            return true;
    }

    for(int i=0; i<n; i++) ///For Col check
    {
        if(arr[i][y]==1)
            return true;
    }

    ///left to right diagonal
    for(int i=x, j=y; i>=0 && j>=0; i--, j--) ///For upside diagonal from the point
    {
        if(arr[i][j]==1)
            return true;
    }

    for(int i=x, j=y; i<n && j<n; i++, j++)///For downside diagonal from the point
    {
        if(arr[i][j]==1)
            return true;
    }

    ///right to left diagonal
    for(int i=x, j=y; i>=0 && j<n; i--, j++) ///For upside diagonal from the point
    {
        if(arr[i][j]==1)
            return true;
    }

    for(int i=x, j=y; i<n && j>=0; i++, j--)///For downside diagonal from the point
    {
        if(arr[i][j]==1)
            return true;
    }

    return false;
}

bool n_Queens(int n, vector< vector<int> > &arr, int q)
{
    if(q==0)
        return true;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(!is_Attack(n, arr, i, j))
            {
                arr[i][j]=1;
                if(n_Queens(n, arr, q-1))
                    return true;
                else
                    arr[i][j]=0;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n;
    q=n;
    vector< vector<int> > arr(n,vector<int>(n,0));
//    vector<vector<long long int> > arr(n, vector<long long int> (n,0));

    if(n_Queens(n, arr, q))
    {
        cout << "YES\n";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "NO\n";
    }




    return 0;
}
