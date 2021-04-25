//Reverse of a string using push_back
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
  string s;
  string s_rev;
  cin>>s;
  for (int i=s.size()-1;i>=0;i--)  
  {
  	s_rev.push_back(s[i]);
  }
  cout<<s_rev;

}
int main()
{
    int t=1;
    
    //cin>>t;
    while(t--)
    {
        solve();
    }
}
