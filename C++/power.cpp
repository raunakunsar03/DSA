#include <iostream>
using namespace std;
int power(/*int a , int b*/)
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)

    {
        ans = ans * a;
    }
    return ans;
}
int main()

{
    // int x, y;
    // cin >> x >> y;
    // int answer = power(x, y);
    // cout << "Answer is " << answer << endl;

    int ans = power();
    cout << ans << endl;
    int cd = power();
    cout <<  cd << endl;
    int ed = power();
    cout << ed << endl;

    return 0;
}