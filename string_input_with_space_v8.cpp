#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    // cin >> s;
    // cin.getline(s, 100); // eta hocce char type string er jonno
    cin.ignore();
    getline(cin, s); // string type get korte
    cout << x << endl;
    cout << s << endl;
    return 0;
}