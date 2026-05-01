#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a;

    for(int i = 0; i < n-1; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    long long i = 1;

    while (i < n)
    {
        if (i != a[i-1])
        {
            cout << i << '\n';
            return 0;
        }
        i++;
    }
    cout << n << "\n";
    return 0;
}