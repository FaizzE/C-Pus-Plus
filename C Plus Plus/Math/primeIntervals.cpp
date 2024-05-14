#include<iostream>
using namespace std;

bool isPrimeOptimised(int n)
{
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            // atleast one divisior other than 1 & N
            return false;
        }
    }
    return true;
}

void printPrimes(int A, int B)
{
    
    for(int i = A; i <= B; i++){
        if(isPrimeOptimised(i)){
            cout << i << ", ";
        }
    }
    cout << endl;
}
int main()
{
//    int a;
//    cout << "Enter value for a :";
//    cin >> a;
//    int b;
//    cout << "Enter value for b : ";
//    cin >> b;

//    cout << (printPrimes(a,b) ? "Prime Number" : "Not Prime"  );

    printPrimes(10,20);

    return 0;
}