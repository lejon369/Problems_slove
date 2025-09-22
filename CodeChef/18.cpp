#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int count = 0;

    while(t>0){
         t /= 10;
        count++;
    }

    cout << count << endl;
    return 0;
}
