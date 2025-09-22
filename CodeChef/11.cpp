#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    string name1, name2;
    cin >> name1 >> name2;

    int gpa1, gap2;
    cin >> gpa1 >> gap2;

    if (gpa1 > gap2)
    {
        cout << name1 << endl;
    }
    else if (gap2 > gpa1)
    {
        cout << name2 << endl;
    }
    else
    {
        cout << "equal" << endl;
    }
}
