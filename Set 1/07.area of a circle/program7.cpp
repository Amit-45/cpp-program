//Area of a circle
//M_PI is the constant used for pi
#include <bits/stdc++.h>
#define M_PI 3.141
using namespace std;

typedef long long ll;
void solve()
{

    int radius;
    cin >> radius;
    cout << (M_PI * radius * radius);
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