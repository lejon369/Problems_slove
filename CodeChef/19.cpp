#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int sum=0,mul=1;

    while(n>0){
        int r=n%10;
        sum+=r;
        mul*=r;
        n=n/10;
    }
    cout <<sum<<" "<<mul;
    return 0;

}
