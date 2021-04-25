//A character is vowel or consonant
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char toUpper(char c)
{
    return 'A' + (c - 'a');
}
int main()
{
    char c;
    cin >> c;

    if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
    {
        cout << "Vowel"
             << "\n";
    }
    else
    {
        cout << "Consonant"
             << "\n";
    }
}
