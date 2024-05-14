#include<iostream>
#include<iomanip>
using namespace std;

int linearSearch (int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main()
{
    // Array
    int a[100] = {1,2,3,4,5,6,7,8,9};

    // size of the Array
    int n = 9;

    // key
    int key = 7;

    // Function Call
    cout << linearSearch(a,n,key);




   return 0;
}