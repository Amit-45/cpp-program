//Reverse of a number
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, rev;
    cin >> n;
    rev = 0;
    while (n != 0)
    {
        int last = n % 10;     //123  4 12 1
        rev = rev * 10 + last; //4 43 432 4321
        n = n / 10;            //123 12 1
    }
    cout << rev << "\n";
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