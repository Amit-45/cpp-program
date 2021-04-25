//Sum of n natural numbers

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int num;
    cin >> num;
    int sum = (num * (num + 1)) / 2;
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