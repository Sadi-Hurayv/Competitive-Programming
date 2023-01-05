
#include<bits/stdc++.h>
using namespace std;

int check(int empl[], int inq, int des, int c)
{
    if(empl[des]==inq)
    {
        return c;
    }
    else if(empl[des]!=inq)
    {
        des=empl[des];
        c++;
        return check(empl, inq, des, c);
    }
}

int main()
{
    int n;
    cin >> n;
    int dsk[n+1], empl[n+1];
    dsk[0]=0; ///em->d
    empl[0]=0;///d->em
    for(int i=1; i<=n; i++)
    {
        dsk[i]=i;
        empl[i]=i;
    }

    int q, ty, a, b, inq, tmp, c, des;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        cin >> ty;
        if(ty==1)
        {
            cin >> a >> b;
            tmp=dsk[a];
            dsk[a]=dsk[b];
            dsk[b]=tmp;

            empl[dsk[a]]=a;
            empl[dsk[b]]=b;
        }
        else if(ty==2)
        {
            c=0;
            cin >> inq;
            des=inq;
            cout << check(empl, inq, des, c) << endl;
        }
    }

    return 0;
}


