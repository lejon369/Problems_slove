#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num[3];
	    cin>>num[0]>>num[1]>>num[2];
	    
	    sort(num,num+3);
	    cout<<num[1]<<"\n";
	}
    return 0;
}


