#include<iostream>
#include<iomanip>
using namespace std;

void reverseArrayInPlace(int arr[], int n)
{
    int s = 0;
    int e = n-1;

    while(s < e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}

int main()
{
    int xy[100] = {1,2,3,4,5,6};
    int n = 6;
    
    reverseArrayInPlace(xy,n);

   return 0;
}