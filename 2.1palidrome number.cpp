#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num)
{
    if (num < 0)
    { // Negative numbers are generally not considered palindromes
        return false;
    }
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = (reversedNum * 10) + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main()
{
    int n;
    cin >> n;

    if (isPalindrome(n))
    {
        cout << n << " is a palindrome." << "\n";
    }
    else
    {
        cout << n << " is not a palindrome." << "\n";
    }

    return 0;
}