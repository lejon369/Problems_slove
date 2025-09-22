#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;

    if (A > 90)
    {
        cout << "A\n"
             << endl;
    }
    else if (A > 70)
    {
        cout << "B\n"
             << endl;
    }
    else if (A >= 40)
    {
        cout << "C\n"
             << endl;
    }

    else
    {
        cout << "F\n"
             << endl;
    }

    return 0;
}
