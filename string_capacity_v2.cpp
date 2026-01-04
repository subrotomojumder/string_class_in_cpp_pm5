#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello world";
    // 1.size :
    // int length = s.size();
    // cout << length << endl;
    // max size
    //  cout << s.max_size() << endl;
    // capacity
    //  cout << s.capacity() << endl;
    // clear()
    // s.clear();
    // cout << s << endl;
    // empty
    // cout << s.empty() << endl;
    // if (s.empty())
    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "No Empty" << endl;
    // }
    // resize
    s.resize(20, 'x');
    cout << s << endl;

    return 0;
}