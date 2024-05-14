#include<iostream>
using namespace std;

// Optimised Approach

bool PrimeOrNot(int n)
{
    if (n == 1 || n == 0) {return false ;}
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            // atleast one divisior other than 1 & N
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << (PrimeOrNot(n) ? "Prime Number" : "Not Prime"  );


    return 0;
}