#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char dna[1000001];
    cin >> dna;
    long long len = 1;
    long long max_len = 1;

    for (long long i = 0; dna[i] != '\0'; i++)
    {
        if (dna[i] == dna[i-1]) len++;
        else 
        {
            max_len = max(max_len, len);
            len = 1;
        }
    }
    max_len = max(max_len, len);
    cout << max_len << '\n';

}