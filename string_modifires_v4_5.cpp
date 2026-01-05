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
    // s.pop_back( );

    // video 5
    // asign
    // s = x;
    // s.assign("Gelo");
    // s.erase(5, 4); // first p strating and second erase quantity
    // replace
    // s.replace(6, 0, "India "); // first strating index, second erase quantity and third replacing text
    // insert
    s.insert(6, "Janardhan ");
    cout << s << endl;
    return 0;
}