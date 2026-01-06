#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        cout << word << endl;
        count++;
    }
    cout << count;
    // ss >> word ;
    // cout << word << endl;
    // ss >> word ;
    // cout << word << endl;
    // ss >> word ;
    // cout << word << endl;
    // ss >> word ;
    // cout << word << endl;
    // ss >> word ;
    // cout << word << endl;
    // cout << s << endl;
    return 0;
}