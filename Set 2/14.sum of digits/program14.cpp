//Sum of digits of a number
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int num, sum = 0;
    cin >> num;
    while (num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    cout << sum << "\n";
}
int main()
{
    int t = 1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    //cin>>t;
    while (t--)
    {
        solve();
    }
}