//Prime number

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, i;
    cin >> n;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime"
                 << "\n";
            break;
        }
    }
    if (i * i > n)
    {
        cout << "Prime"
             << "\n";
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
