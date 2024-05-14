#include<bits/stdc++.h>
using namespace std;
int main()
{
     string weather;
     int temp;
     cout <<"Enter the temperature : ";
     cin>>temp;

    /* if(temp > 30){
         weather = "Hot";
     }
     else{
         weather = "Pleasant";
     } */

    cout << (temp > 30 ? "Hot" : "Pleasant") << endl;


    weather = temp > 30 ? "Hot" : "pleasant";
    cout << weather << endl;


    return 0;
}