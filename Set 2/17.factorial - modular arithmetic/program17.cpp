//Factorial(also for large numbers)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int M = 100000007;
    ll fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = ((fact * i) % M);
    }

    cout << fact << "\n";
}