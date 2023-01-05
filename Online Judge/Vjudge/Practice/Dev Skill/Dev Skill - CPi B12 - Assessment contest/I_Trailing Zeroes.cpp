#include<bits/stdc++.h>
using namespace std;

long long int const num = 1000020;
vector<long long int> prime;
void primeFactor() ///Sieve Of Eratosthenes Technique
{
    bool flag[num+10];
//    cout << flag[0];
    for(long long int i=2; i*i<=num; i++)
    {
        if(!flag[i])
        {
            for(long long int j=2; i*j<=num; j++)
            {
                flag[i*j]=1;
            }
        }
    }

    for(long long int i=2; i<=num; i++)
    {
        if(!flag[i])
        {
            prime.push_back(i);
        }
    }

//    for(long long int i=0; i<10; i++)
//    {
//        cout << prime[i] << "\n";
//    }

}
long long int countDivisor(long long int n)
{
    long long int c=0;
    long long int divisor = 1;
    for(long long int i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
    {
        if(n%prime[i]==0)
        {
            c=0;
            while(n%prime[i]==0)
            {
                c++;
                n=n/prime[i];
            }
        }
        divisor*=(c+1);
    }

    if(n!=1)
    {
        divisor*=2;
    }
    return divisor;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    primeFactor();
    long long int n, t;
    cin >> t;

    for(long long int i=1; i<=t; i++)
    {
        cin >> n;
        cout << "Case " << i << ": " << countDivisor(n)-1 << "\n";
    }
    return 0;
}
