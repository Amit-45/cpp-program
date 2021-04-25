//Greatest of two numbers
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << "\n";
    }
    else
    {
        cout << b << "\n";
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