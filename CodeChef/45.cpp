// Update the code below to solve the problem
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        //Accept 1 integer inputs.
        cin >> X;
        if(X>100) cout<<X-10<<"\n";
        else cout<<X;
    }
    return 0;
}