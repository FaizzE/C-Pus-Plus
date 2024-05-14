#include <iostream>
using namespace std;
int main() {
   // cout << "Hello , World";
    int t,n;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        if(n%2==0){
            n =  n;
        }else{
            n = n/2+1;
            cout << n  << n<<endl;
        }
    }
   

    return 0;
}