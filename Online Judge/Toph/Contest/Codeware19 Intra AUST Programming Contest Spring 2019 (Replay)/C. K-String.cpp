#include<bits/stdc++.h>
using namespace std;

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
    int arr[26]={0}, n, k, pos, i, res, c=0;
    char s1[1000005]={'\0'};
	char dummy;
	cin >> n >> k;
	scanf("%c",&dummy);
	scanf("%s",s1);

    i=0;
    while (s1[i] != '\0') {
      if (s1[i] >= 'a' && s1[i] <= 'z') {
         pos = s1[i] - 'a';
         ++arr[pos];
      }
      ++i;
    }
//    sort(arr,arr+26);
    merge_sort(arr, 26);
    res=0;
    for(i=0; i<26-k; i++)
    {
        res+=arr[i];
    }
    while(arr[i]==0)
    {
        c++;
        i++;
        if(i==26)
            break;
    }
    cout << res+c;

    return 0;
}
