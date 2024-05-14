#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int x = 10;
    int y = x++; // x++ post increment
    int z = ++x; // ++x pre increment 

    cout << "X = "<< x<<endl;
    cout << "Y = " << y <<endl;
    cout << "z = " << z << endl;

    return 0;
}