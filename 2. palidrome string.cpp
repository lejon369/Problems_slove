
/**

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    bool isPalindrome = true;
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "YES\n" : "NO\n");

    return 0;
}


**/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false; // Characters don't match, not a palindrome
        }
        left++;
        right--;
    }
    return true; // All characters matched, it's a palindrome
}

int main()
{
    string s;
    cin >> s;

    if (isPalindrome(s))
    {
        cout << "\"" << s << "\" is a palindrome." << "\n";
    }
    else
    {
        cout << "\"" << s << "\" is not a palindrome." << "\n";
    }

    return 0;
}