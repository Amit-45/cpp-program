//Fibonnaci series up to n
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void fibo(int n)
{
    int a = 0;
    int b = 1;
    int c;

    for (int i = 1; i <= n; i++)
    {

        cout  <<a << endl;
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cin >> n;
    fibo(n);
    return 0;
}
