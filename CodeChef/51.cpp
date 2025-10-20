#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
       while(n !=0){
        int div = n%10;
        count += div;
        n = n/10;
       }
        cout<<count<<endl;
    }

}
