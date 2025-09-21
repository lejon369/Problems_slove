#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> number(n);

    int sum_dig = 0, sum_ten = 0, sum_thou = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }

    for (int i = 0; i < n; i++)
    {
        int num = number[i];
        sum_dig += abs(num % 10);
        sum_ten += abs((num / 10) % 10);
        sum_thou += abs((num / 100) % 10);
    }

    cout << sum_dig << "\n";
    cout << sum_ten << "\n";
    cout << sum_thou << "\n";

    return 0;
}