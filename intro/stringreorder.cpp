#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool possible(string str)
{
    for (int i = 0; i < (int)str.size()-1; i++)
    {
        if (str[i] == str[i+1]) return false;
    }
    return true;
}

int main(void)
{
    string str;
    cin >> str;

    string newstr;

    int alpha[26] = {0};

    for (char s : str)
    {
        alpha[s - 'A']++;
    }

    if ((int)str.size() % 2 == 0)
    {
        string substr;
        for (int i = 0; i < 26; i++)
        {
            if (alpha[i]%2 == 1)
            {
                cout << "NO SOLUTION\n";
                return 0;
            }

            for (int j = 0; j < alpha[i]/2; j++)
            {
                substr.push_back(i+'A');
            }
        }

        newstr = substr;

        reverse(substr.begin(), substr.end());

        newstr = newstr + substr;

        cout << newstr << "\n";
    }

    else
    {
        string substr;
        int middle_count = 0;
        char midchar;

        for (int i = 0; i < 26; i++)
        {
            if (alpha[i]%2 == 1)
            {
                middle_count++;
                midchar = i+'A';
                continue;
            }

            for (int j = 0; j < alpha[i]/2; j++)
            {
                substr.push_back(i+'A');
            }
        }

        if (middle_count > 1)
        {
            cout << "NO SOLUTION\n";
            return 0;
        }

        newstr = substr;

        for (int i = 0; i < alpha[midchar - 'A']; i++)
        {
            newstr = newstr + midchar;
        }

        reverse(substr.begin(), substr.end());

        newstr = newstr + substr;

        cout << newstr << endl;
    }
}