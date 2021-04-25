//Capital-baazi


//Given in one line, all letters are lowercase only, separated by a single space.

//Characters used in input are from 'a' to 'z' only ( 26 in total ) , both included.

//Sample input: subscribe to luv channel

//Sample output: SUBSCRIBE 
//				 TO
//				 LUV
//				 CHANNEL
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char toUpper(char c)
{
    return 'A' + (c - 'a');
}
void solve()
{
    string s;

    while (cin >> s)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = toUpper(s[i]);
        }
        cout << s << "\n";
    }
}
int main()
{
    int t = 1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
