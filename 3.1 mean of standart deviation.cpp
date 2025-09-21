#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double mean_number(const vector<int> &arr)
{
    int sum = 0;
    for (int num : arr)
        sum += num;
    return (double)sum / arr.size();
}

double stddev(const vector<int> &arr, double mean)
{
    double variance = 0;
    for (int num : arr)
        variance += (num - mean) * (num - mean);
    variance /= arr.size(); // population std deviation
    return sqrt(variance);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n <= 0 || n >= 20)
    {
        cout << "Invalid input n < 20\n";
        return 1;
    }

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    double mean = mean_number(numbers);
    double sd = stddev(numbers, mean);

    cout << "Mean: " << mean << "\n";
    cout << "Standard Deviation: " << sd << "\n";

    return 0;
}
