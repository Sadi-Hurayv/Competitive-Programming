#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, tmp;
    cin >> n;

    for(int ii=0; ii<n; ii++)
    {
        cin >> m;
        int bact[m][m];
        ///input
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> bact[i][j];
                //bact[i][j]=tmp;
            }
        }

        ///check
        int c1=0, c0=0, hr=0, vr=0, esc=0, tri=0;
        for(int i=0; i<m; i++)
        {
            tri=0;
            for(int j=0; j<m; j++)
            {
                hr=0;
                vr=0;
                if(bact[i][j]==1)
                {
                    c1++;
                    tri=1;
                }
                else
                {
                    if(i!=0 && i!=m-1)
                    {
                        /// to track vertical edge
                        if(bact[i-1][j]==2)
                        {
                            bact[i][j]=2;

                        }

                        ///check for count
                        if(tri==1)
                        {
                            ///check hprizontal
                            for(int k=j+1; k<m; k++)
                            {
                                if(bact[i][k]==1)
                                {
                                    hr=1;
                                    break;
                                }
                            }

                            if(hr==1)
                            {
                                ///check vertical
                                if(bact[i][j]==2)
                                {
                                    vr=1;
                                    c0++;

                                }
                                else
                                {
                                    int vru=0, vrd=0;

                                    ///check vertical up
                                    for(int k=i-1; k>=0; k--)
                                    {
                                        if(bact[k][j]==1)
                                        {
                                            vru=1;
                                            break;
                                        }
                                    }

                                    ///check vertical down
                                    if(vru==1)
                                    {
                                        for(int k=i+1; k<m; k++)
                                        {
                                            if(bact[k][j]==1)
                                            {
                                                vrd=1;
                                                vr=1;
                                                bact[i][j]=2;
                                                c0++;
                                                break;
                                            }
                                        }
                                    }

//                                    ///vertical conclusion
//                                    if(vru==1 && vrd==1)
//                                    {
//
//                                    }
                                }
                            }

                        }

                    }
                }
            }
        }
        double result =(c1+c0)/(2*1.00);
        cout << fixed << setprecision(2) << result << endl;

    }
    return 0;
}
