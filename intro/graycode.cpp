#include <bits/stdc++.h>
using namespace std;

int powerof2(int pow)
{
    int res =  1;

    while(pow--)
    {
        res *= 2;
    }


    return res;
}

void convertobinary(int x, int n)
{
    string res;
    if (x == 0) 
    {
        int count = 0;
        while (count < n)
        {
            cout << "0";
            count++;
        }
        return;
    }

    while(x != 0)
    {
        res.push_back(((x % 2) + '0'));
        x /= 2;
    }

    reverse(res.begin(), res.end());
     
    while ((int)res.size() < n)
    {
        res = "0" + res;
    }

    cout << res;
}

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < powerof2(n); i++)
    {
        int temp  = i ^ (i >> 1);
        convertobinary(temp,n);
        cout << "\n";
    }

    return 0;
}