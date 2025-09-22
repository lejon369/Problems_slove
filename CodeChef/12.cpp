#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C && A == C)
    {
        cout << "Equilateral" << endl;
    }
    else if (A == B || B == C || A == C)
    {
        cout << "Isosceles" << endl;
    }
    else
    {
        cout << "Scalene" << endl;
    }
}
