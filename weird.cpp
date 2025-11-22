#include <iostream>
using namespace std;

int main(void)
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n != 1)
    {
        if (n%2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n*3 + 1;
        }

        cout << n << " ";
    }

    cout << "\n";
}