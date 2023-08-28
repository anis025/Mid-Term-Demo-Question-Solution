#include<bits/stdc++.h>
using namespace std; 
#define ll long long int 
#define endl '\n' 

class NumberSum {
    public: 
          
    void printSum(int num1, ll num2); 
    void printSum(int num1, int num2, int num3);


};

void NumberSum :: printSum(int num1, ll num2) {
    ll sum = num1 + num2; 
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum <<endl;
}


void NumberSum :: printSum(int num1, int num2, int num3) {
    int sum = num1 + num2 + num3; 
    cout << "Sum of " << num1 << ", " << num2 << " and " << num3 << " is: " << sum <<endl;

}

int main() {

    NumberSum ns; 
    int num1 = 5; 
    ll num2 = 1000000; 
    int num3 = 10; 

    ns.printSum(num1, num2); 

    /* 
     printSum method with two integer parameters is called. Since there is no exact match for a method with two integer parameters, the compiler will automatically convert the num1 parameter to a long to match the method's parameter types.

    As a result, the method with two parameters of int and long will be called, and the sum of num1 and num2 will be printed.
 
    
     */



    return 0;
}