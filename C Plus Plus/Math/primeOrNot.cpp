#include<iostream>
using namespace std;

bool PrimeOrNot(int n)
{
    for(int i = 2; i < n; i++){
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

    cout << (PrimeOrNot(n) && n > 2 ? "Prime Number" : "Not Prime"  );


    return 0;
}