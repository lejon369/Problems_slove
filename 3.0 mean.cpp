#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int sum_m(const vector<int> &arr)
{
    int sum = 0;
    for (int num : arr)
    {
        sum += num;
    }
    return sum / arr.size();
}
int main()
{
    int n;
    cin >> n;

    vector<int> number(n);

    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }

    cout << "Mean: " << sum_m(number);

    return 0;
}