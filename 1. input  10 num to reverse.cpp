#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 9; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}