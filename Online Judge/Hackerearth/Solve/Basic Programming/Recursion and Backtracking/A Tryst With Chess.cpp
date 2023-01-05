#include<bits/stdc++.h>
using namespace std;

void k_move(vector< vector<int> > &arr, int i, int j, int m)
{
    int tmpi, tmpj;
    //arr[i][j]++;

    if(m==0)
        return;

    /// UP
    tmpi=i-2;

    tmpj=j-1;
    if(tmpi>=0 && tmpj>=0 && tmpi<10 && tmpj<10)
    {
        k_move(arr, tmpi, tmpj, m-1);
        arr[tmpi][tmpj]++;
    }

    tmpj=j+1;
    if(tmpi>=0 && tmpj>=0 && tmpi<10 && tmpj<10)
    {
        k_move(arr, tmpi, tmpj, m-1);
        arr[tmpi][tmpj]++;
    }


    /// RIGHT
    tmpj=j+2;

    tmpi=i-1;
    if(tmpi>=0 && tmpj>=0 && tmpi<10 && tmpj<10)
    {
        k_move(arr, tmpi, tmpj, m-1);
        arr[tmpi][tmpj]++;
    }


    tmpi=i+1;
    if(tmpi>=0 && tmpj>=0 && tmpi<10 && tmpj<10)
     {
        k_move(arr, tmpi, tmpj, m-1);
        arr[tmpi][tmpj]++;
    }


    /// DOWN
    tmpi=i+2;

    tmpj=j-1;
    if(tmpi>=0 && tmpj>=0 && tmpi<10 && tmpj<10)
    {
        k_move(arr, tmpi, tmpj, m-1);
        arr[tmpi][tmpj]++;
    }


    tmpj=j+1;
    if(tmpi>=0 && tmpj>=0 && tmpi<10 && tmpj<10)
    {
        k_move(arr, tmpi, tmpj, m-1);
        arr[tmpi][tmpj]++;
    }


    /// LEFT
    tmpj=j-2;

    tmpi=i-1;
    if(tmpi>=0 && tmpj>=0 && tmpi<10 && tmpj<10)
    {
        k_move(arr, tmpi, tmpj, m-1);
        arr[tmpi][tmpj]++;
    }


    tmpi=i+1;
    if(tmpi>=0 && tmpj>=0 && tmpi<10 && tmpj<10)
    {
        k_move(arr, tmpi, tmpj, m-1);
        arr[tmpi][tmpj]++;
    }

    arr[i][j]--;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, i, j, c;
    cin >> i >> j >> m;

    vector< vector<int> > arr (10, vector<int>(10,0));

    c=0;
    k_move(arr, i-1, j-1, m);
    arr[i-1][j-1]++;

//    for(int i=0; i<10; i++)
//    {
//        for(int j=0; j<10; j++)
//        {
//            cout << arr[i][j];
//        }
//        cout << "\n";
//    }

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(arr[i][j]>0)
                c++;
        }
    }

    cout << c << "\n";

    return 0;
}
