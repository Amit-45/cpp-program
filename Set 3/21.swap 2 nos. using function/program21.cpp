//Swap using function
#include <bits/stdc++.h>
using namespace std;

int swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  int a;
  int b;
  cin >> a >> b;
  swap(a, b);
  cout << a << " " << b;
}
