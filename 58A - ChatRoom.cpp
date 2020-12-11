#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, hello = "hello";
    int count = 0, j = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == hello[j])
        {
            j++;
            count++;
            if (count == 5)
            {
                cout << "YES" << endl;
                break;
            }
        }
    }
    if (!(count == 5))
        cout << "NO" << endl;
    return 0;
}