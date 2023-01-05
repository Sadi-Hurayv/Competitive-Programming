#include<bits/stdc++.h>
using namespace std;

struct Point
{
    long long int x, y;
};

double triangleArea(Point p1, Point p2, Point p3)
{
    return abs((p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y)+ p3.x*(p1.y-p2.y))/2.0);
}

bool isInside(Point p1, Point p2, Point p3, Point p)
{
    double area = triangleArea (p1, p2, p3);
    double area1 = triangleArea (p, p2, p3);
    double area2 = triangleArea (p1, p, p3);
    double area3 = triangleArea (p1, p2, p);

    return (area == area1 + area2 + area3);
}

int main()
{
    int m, n, s, h, t1, t2;
    cin >> n >> m >> s;
    Point p1= {0,0}, p2= {0,m}, p3= {n,m}, p4= {n,0}, p;
    t1=0;
    t2=0;
    for(int i=0; i<s; i++)
    {
        cin >> p.x >> p.y >> h;
        if (isInside(p1, p2, p3, p))
            t1+=h;
        else if(isInside(p1, p4, p3, p))
            t2+=h;
    }
    cout << t1 << " " << t2 << endl;
    return 0;
}
