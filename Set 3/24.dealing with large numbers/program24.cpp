//Taking large number as inputs
//Take them in the form of string
//Then convert it to integer

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s[s.size() - 1] << " as a character"
         << "\n";                         //prints the last digit of the number(but as a character)
    cout << (int)s[s.size() - 1] << "\n"; //prints the ascii value of the last digit
    cout << s[s.size() - 1] - '0' << " as an integer "
         << "\n"; //prints the last digit of the number(but as an integer)
}
