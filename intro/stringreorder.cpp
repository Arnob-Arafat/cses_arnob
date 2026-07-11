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

    int alpha[26] = {0};
    for (int i = 0; i < (int)str.size(); i++) alpha[str[i] - 'A']++;
    
    string newstr;
    int i = 0;
    int count = 0;
    int lastindex = -1;

    while(count < str.size())
    {
        if (alpha[i] != 0 && i != lastindex) 
        {
            newstr.push_back('A'+i);
            alpha[i]--;
            lastindex = i;
            i = 0;
            count++;
        }
        
        else i++;
    }
    if (!possible(newstr)) cout << -1;

    else cout << newstr << endl;
}