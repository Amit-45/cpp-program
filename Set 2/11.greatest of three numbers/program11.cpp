//Greatest of three numbers
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    int a, b, c;
    cin >> a >> b >> c;
    if ((a > b) && (a > c))
    {
        cout << a << "\n";
    }
    else if ((b > a) && (b > c))
    {
        cout << b << "\n";
    }
    else
    {
        cout << c << "\n";
    }
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