#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   // Find average of 5 integers and print the output upto 4 decimal places

    int a,b,c,d,e,f,g;
    cout << "Enter the Numbers : ";
    cin>>a>>b>>c>>d>>e;
    int sum = a+b+c+d+e;

    cout <<(float) sum/5 << endl;

    cout << fixed << setprecision(4) << (float)sum/5 <<endl;
}