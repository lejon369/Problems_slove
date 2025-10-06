#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,cost,buy;
        cin>>x>>y>>z;
        // your code goes here
        cost = x*5+y*10;
        buy = cost/z;

        cout<<buy<<"\n";

    }
	

}
