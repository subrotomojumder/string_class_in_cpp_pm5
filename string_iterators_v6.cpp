#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    // cout << *s.begin() << endl; // begin iterator string er strating element ref ke return kore
    // cout << *(s.end() - 1) << endl; // end iterator string er ending element er ref return kore
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    // using iterator
    // for (string ::iterator i = s.begin(); i < s.end(); i++)
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}