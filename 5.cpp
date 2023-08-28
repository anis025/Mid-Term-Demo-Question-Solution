#include<bits/stdc++.h>
using namespace std; 
#define ll long long int 
#define endl '\n' 

 

class solution {
public:
    // Method to print the sum of two integers
    void printSum(int num1, int num2) {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }

    // Method to print the sum of two long integers
    void printSum(ll num1, ll num2) {
        ll sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    solution soln;

    int num1 = 5;
    int num2 = 10;
    ll num3 = 1000000000;  
    ll num4 = 2000000000;

    // Call the method with integer parameters
    soln.printSum(num1, num2);

    // Call the method with long integer parameters
    soln.printSum(num3, num4);
 
    return 0;
}

  