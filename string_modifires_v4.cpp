#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    string x = "Hi Man ";
    // manually append
    // s += x;
    // append by builtin func
    // s.append(x);

    // push_back shese ekta character add korte pare
    // s.push_back('I');
    // s[0] = 'G'; // previous size ke expend korte pare na

    // pop_back shese ekta character remove korte pare
    s.pop_back( );
    cout << s << endl;
    return 0;
}