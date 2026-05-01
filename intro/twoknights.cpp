#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    int n;
    cin >> n;

    int i = 0;
    long long mul1 = 2;
    long long add1 = 0;

    long long mul2 = 3;
    long long add2 = 3;

    long long x = 0;

    while (i < n)
    {
        cout << x << "\n";

        x = mul1 * mul2;

        add1+=2;
        mul1+=add1;
        
        add2++;
        mul2+=add2;
        i++;
    }

    return 0;
}