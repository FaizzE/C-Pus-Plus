#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    
    // input
    // cin >> arr;

    cin.getline(arr,100);
    cout << strlen(arr) << endl;
    cout << arr << endl;
   
    // ye nextline me jaane ke use kiya hai and jab sentence 
    // pure ho jaye to $ dalkar enter karna
    cin.getline(arr,100,'$');
    cout << strlen(arr) << endl;
    cout << arr << endl;
   


    return 0;
}