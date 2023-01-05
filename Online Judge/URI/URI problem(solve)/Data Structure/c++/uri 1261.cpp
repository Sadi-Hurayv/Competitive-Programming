#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c;
    std::map<string,int>job;
    string job_name, job_desc;
    long long int job_salary, ttl;

    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> job_name >> job_salary;
        job.insert(pair<string,int>(job_name,job_salary));
    }

    c=0;
    ttl=0;
    while(c<m)
    {
        getline(cin,job_desc);
        if(job_desc==".")
        {
            cout << ttl << endl;
            c++;
            ttl=0;
        }
        else
        {
            string tmp_word="";
            std::map<string,int>::iterator it;
            for(auto x : job_desc)
            {
                if(x==' ')
                {
                    it=job.find(tmp_word);
                    if(it!=job.end())
                    {
                        ttl+=it->second;
                    }
                    tmp_word="";
                }
                else
                {
                    tmp_word=tmp_word+x;
                }
            }
            it=job.find(tmp_word);
            if(it!=job.end())
            {
                ttl+=it->second;
            }
        }
    }
    return 0;
}
