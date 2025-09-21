#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    vector<int> price(n);
    vector<int> product(n);

    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> product[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += price[i] * product[i];
    }

    cout << sum;

    return 0;
}

/*

#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;

    int sum =0;

for (int i= 0; i<n; i++){

    int price,produc;
    cin>>price>>produc;

    sum += price*produc;
}
cout<<sum;

    return 0;
}

*/