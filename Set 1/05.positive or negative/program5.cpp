//Positive or negative program
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "Positive"
             << "\n";
    }
    else if (num == 0)
    {
        cout << "Zero"
             << "\n";
    }
    else
    {
        cout << "Negative"
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