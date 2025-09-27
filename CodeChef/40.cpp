// Update the program below to solve the problem
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> C;
        B = A + C;

        if (B % 2 == 0)
        {
            cout << B / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        


    }
    return 0;
}