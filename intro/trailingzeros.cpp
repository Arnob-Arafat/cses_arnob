#include <bits/stdc++.h>
using namespace std;

long long solve(long long n)
{
    if (n == 0) return 0;
    
    return n/5 + solve(n/5);
}

int main(void)
{
    long long n;
    cin >> n;

    cout << solve(n) << endl;
}