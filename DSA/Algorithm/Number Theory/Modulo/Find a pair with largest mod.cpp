/*
    You are given n numbers, find a pair of numbers for which max(ai % aj) (largest mod) exist.
    Print the pair and the mod. (ai aj mod)
    2 <= n <= 10^5
    1 <= a <= 10^9
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    /*
        After sorting take the largest and second largest number as pair.
        Now if we mod the second largest number under largest number we will get the lagest mod
            which is the second largest number.
    */
    long long int fst, snd;
    fst = snd = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > fst)
            snd = fst, fst = arr[i];
        else if (arr[i] > snd && arr[i] != fst)
            snd = arr[i];
    }

    if (snd == INT_MIN)
        cout << 0 << endl;
    else
        cout << snd << endl;

    return 0;
}