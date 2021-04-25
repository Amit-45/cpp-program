//A character is alphabet or not
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    char c;
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        cout << "Alphabet"
             << "\n";
    }
    else
    {
        cout << "Not an alphabet"
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