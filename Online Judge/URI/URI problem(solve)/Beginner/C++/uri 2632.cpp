#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    int w,h, blx, bly, brx, bry, ulx, uly, urx, ury;
    string spl;
    int lvl, cx, cy, dmg, r;
    double dis;

    cin >> t;
    for(int i=0; i<t; i++)
    {

        cin >> w >> h >> blx >> bly;
        cin >> spl >> lvl >> cx >> cy;
        //cout << spl << cx << cy;

        /// Determine the damage and radius
        if(spl=="fire")
        {
            dmg = 200;
            if(lvl==1)
            {
                r=20;
            }
            else if(lvl==2)
            {
                r=30;
            }
            else if(lvl==3)
            {
                r=50;
            }
        }
        else if(spl=="water")
        {
            dmg = 300;
            if(lvl==1)
            {
                r=10;
            }
            else if(lvl==2)
            {
                r=25;
            }
            else if(lvl==3)
            {
                r=40;
            }
        }
        else if(spl=="earth")
        {
            dmg = 400;
            if(lvl==1)
            {
                r=25;
            }
            else if(lvl==2)
            {
                r=55;
            }
            else if(lvl==3)
            {
                r=70;
            }
        }
        else if(spl=="air")
        {
            dmg = 100;
            if(lvl==1)
            {
                r=18;
            }
            else if(lvl==2)
            {
                r=38;
            }
            else if(lvl==3)
            {
                r=60;
            }
        }

        ///coordinate of another 3 corner
        brx=blx+w;
        bry=bly;

        urx=brx;
        ury=bry+h;

        ulx=blx;
        uly=bly+h;

        if(cx<blx)
        {
            if(cy<bly)
            {
                dis=sqrt(pow((cx-blx),2)+pow((cy-bly),2));
            }
            else if(cy>uly)
            {
                dis=sqrt(pow((cx-ulx),2)+pow((cy-uly),2));
            }
            else    /// (cy>=bly && cy<=uly)
            {
                dis=abs(cx-blx); ///abs(cx-ulx)
            }
        }
        else if(cx>brx)
        {
            if(cy<bry)
            {
                dis=sqrt(pow((cx-brx),2)+pow((cy-bry),2));
            }
            else if(cy>ury)
            {
                dis=sqrt(pow((cx-urx),2)+pow((cy-ury),2));
            }
            else    /// (cy>=bry && cy<=ury)
            {
                dis=abs(cx-brx);  ///abs(cx-urx)
            }
        }
        else          /// (cx>=blx && cx<=brx)
        {
            if(cy<bly)  ///(cy<bry)
            {
                dis=abs(cy-bly);
            }
            else if(cy>uly)  ///(cy>ury)
            {
                dis=abs(cy-uly);
            }
            else    /// (cy>=bly && cy<=uly)  /// (cy>=bry && cy<=ury)
            {
                dis=0; /// (cx,cy) is inside the rectengle
            }
        }

        ///Final part decision making
        if(r>=dis)
        {
            cout << dmg << endl;
        }
        else
        {
            cout << "0" << endl;
        }

    }
    return 0;
}
