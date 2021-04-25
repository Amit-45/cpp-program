//Number of digits in an integer
//To eliminate use number=number/10
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n; //123
    int count = 0;
    while (n != 0)
    {
        n = n / 10; //last 12
        count++;
    }
    cout << count << "\n";
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