#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        if (abs(a-b) == 3 || a == b*2 || b == a*2 || a == b) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}