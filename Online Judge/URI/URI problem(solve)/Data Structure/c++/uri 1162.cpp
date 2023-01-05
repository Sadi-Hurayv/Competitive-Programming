#include<bits/stdc++.h>
using namespace std;

int c=0;


void merge(int left[], int ln, int right[], int rn, int arr[])
{
    int i=0, j=0, k=0;
    while(i<ln && j<rn)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            c+=ln-i;
        }
        k++;
    }
    while(i<ln)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<rn)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}


void merge_sort(int arr[], int n)
{
    if(n<2)
    {
        return;
    }
    int mid=n/2;
    int left[mid], right[n-mid];
    for(int i=0; i<mid; i++)
    {
        left[i]=arr[i];
    }
    for(int i=mid; i<n; i++)
    {
        right[i-mid]=arr[i];
    }
    merge_sort(left, mid);
    merge_sort(right, n-mid);
    merge(left, mid, right, n-mid, arr);
}


int main()
{
    int n, s, i;
    cin >> n;

    for(int j=0; j<n; j++)
    {
        cin >> s;

        int arr[s];
        for(i=0; i<s; i++)
        {
            cin >> arr[i];
        }

        merge_sort(arr,s);

        cout << "Optimal train swapping takes " << c << " swaps." << endl;
        c=0;
    }



    return 0;
}
