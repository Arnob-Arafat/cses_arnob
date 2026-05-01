#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    long long sum = (long long)n*(n+1)/2;

    if (sum%2 == 1)
    {
        cout << "NO" << "\n";
        return 0;
    }
    else cout << "YES" << "\n";

    int arr[n] = {0};
    
    int r = n;
    int l = 1;

    long long sum_parts = sum/2;

    int count = 0;

    while(sum_parts != 0)
    {
        if (sum_parts >= n) 
        {
            arr[r-1]++;
            sum_parts -= r;
            r--;
            count++;
            
        }
        else
        {
            arr[l-1]++;
            sum_parts -= l;
            l++;
            count++;
        }
    }

    cout << count << endl;

    for (int i = 0; i < n; i++) if (arr[i] != 0) cout << i+1 << " ";

    cout << endl;

    cout << n-count << endl;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0) cout << i+1 << " "; 
    }
    cout << endl;
}