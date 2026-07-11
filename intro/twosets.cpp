#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    
    long long sum = n*(n+1)/2;
    if (sum%2 == 0) cout << "YES\n";
    else
    {
        cout << "NO\n";
        return 0;
    }

    long long last = n;

    bool f[n] = {0};

    long long temp = 0;

    vector<long long> s1;

    while(temp <= sum/2 && last > 0)
    {
        if (temp + last <= sum/2)
        {
            f[last-1] = true;
            temp += last;
            s1.push_back(last);
        }
        
        last--;
    }

    cout << (long long)s1.size() << "\n";
    for (long long i = 0; i < (long long)s1.size(); i++)
    {
        cout << s1[i] << " ";
    }

    cout << "\n" << n-(long long)s1.size() << "\n";

    for (long long i = 0; i < n; i++)
    {
        if(!f[i]) cout << i+1 << " ";
    }

    cout << "\n";

    return 0;
}