//GCD of two numbers
//reverse loop
//division check
//break
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int a, b;
    cin >> a >> b;

    int maxOfTwo = max(a, b);
    for (int i = maxOfTwo; i > 0; i--)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            cout << "GCD is: " << i << "\n";
            break;
        }
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