// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int x,y;
//         cin>>x>>y;
//         // your code goes here
//         if (x<y){
//             int extra = y%x;
//             int total = x+(extra*2);
//             cout << total << endl;
//         }else{
//             cout<<y<<"\n";
//         }
        
//     }	

// }
///anothre rsloution

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y>x){
            cout<< y+(y-x)*2 <<endl;
        }else{
            cout<<y<<endl;
        }
    }

}