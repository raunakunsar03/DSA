#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    string str;
    cout << isPalindrome();
}