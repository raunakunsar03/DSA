#include <iostream>
using namespace std;
int main()
{
    string s;
    string ans = "";
    cout << "Enter a string: ";
    getline(cin,s);
    for (int i = s.length() - 1 ; i >= 0; i--)
    {
        ans.push_back(s[i]);
    }
    cout << s << endl;
    cout << ans << endl;

    if (s == ans)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False";
    }
}