//rewrite small numbers from input to output. Stop processing input after reading in the number 42.
//All numbers at input are integers of one or two digits.
#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;

int main()
{
    int t = 1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);

    while (true)
    {
        cin >> t;
        if (t == 42)
        {
            break;
        }
        cout << t << "\n";
    }
}