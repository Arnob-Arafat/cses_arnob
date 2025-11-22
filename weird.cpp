#include <iostream>
using namespace std;

int main(void)
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";
        if (n%2 == 0) n /= 2;
        else n = n*3 + 1;
    }

    cout << n << "\n";
}