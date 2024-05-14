#include<iostream>
#include<iomanip>
using namespace std;

void RevArray(int arr[], int n)
{
    // 1st Method
    for(int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }cout << endl;

    // 2nd Method
    for(int i = 0; i < n; i++){
        cout << arr[n-1-i] << " ";
    }
}

int main()
{
    int xy[100] = {1,2,3,4,5,6,7,8,9};
    int n = 9;

    RevArray(xy,n);


   return 0;
}