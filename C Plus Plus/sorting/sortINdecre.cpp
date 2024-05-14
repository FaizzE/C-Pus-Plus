#include<bits/stdc++.h>
using namespace std;

void print (int * array,int n){
    for(int i = 0; i < n; i++){
        cout << array[i] <<" "; 
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];

    }

    // Sort  with greater element at the front 
    sort(arr , arr+n, greater<int>());

    print(arr,n);


    return 0;
}