#include<iostream>
using namespace std;

int factorial (int x){
    int ans = 1;

    for(int i = 1; i <= x; i++){
        ans = ans * i;
    }
    return ans;
}

int main()
{
    cout << factorial(6) << endl;
}