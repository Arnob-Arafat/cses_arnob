#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        long long x, y;
        cin >> x >> y;

        long long res = 0;
        if (y % 2 == 1)
        {
            if (x <= y) res = y*y - (x-1);
            else if (x%2 == 1) res = (x-1)*(x-1) + (y);
            else res = x*x - (y-1);
        }
        else
        {
            if (x <= y) res = (y-1)*(y-1) + x;
            else if (x%2 == 0) res = (x)*(x) - (y-1);
            else res = (x-1)*(x-1) + 1 + (y-1);
        }

        cout << res << "\n";
    }
    return 0;
}