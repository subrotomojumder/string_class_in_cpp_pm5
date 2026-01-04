#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // access by index
    cout << s[0] << endl;
    // use at func
    cout << s.at(1) << endl;
    // first element access
    cout << s.front() << endl;
    // last element access
    cout << s.back() << endl;
    return 0;
}