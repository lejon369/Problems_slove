#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    for (int nums : num)
    {
        cout << nums << "\n";
    }

    return 0;
}