#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    n--;

    vector<int> a;

    while(n--)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());
    int i = a[0];

    for(int x : a)
    {
        if (x != i)
        {
            cout << i << '\n';
            return 0;
        }
        i++;
    }
    return 0;
}