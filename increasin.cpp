#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;
    long long x[n];
    cin >> x[0];

    long long moves = 0;

    for (long long i = 1; i < n; i++)
    {
        cin >> x[i];
        if (x[i] < x[i-1]) 
        {
            moves += x[i-1] - x[i];
            x[i] = x[i-1];
        }
    }
    cout << moves << '\n';

}