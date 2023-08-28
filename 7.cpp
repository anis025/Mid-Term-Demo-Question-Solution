#include<bits/stdc++.h> 
using namespace std;  
#define ll long long int 
#define endl '\n' 

const double pi = 3.1416;

class AustraliaCircleField {
    private: 
        double radius; 
    
    public: 
        AustraliaCircleField() {
            this->radius = 100.0;
        }

        AustraliaCircleField(double radius){ 
            this->radius = radius;
        } 

        double get_area() {
            return pi * radius *radius;
        } 

        double get_radius() {
            return radius;
        }

        void set_radius(double r) {
            this->radius = r; 
        }
};


int main() {
    AustraliaCircleField australia1(100.0);
    AustraliaCircleField australia2(120.0);
    AustraliaCircleField australia3(240.0);


    cout << "Australia Circle Field 1:\n";
    cout << "Radius: " << australia1.get_radius() << "\n";
    cout << "Area: " << australia1.get_area() << "\n\n";


    cout << "Australia Circle Field 2 (Before Changing Radius):\n";
    cout << "Radius: " << australia2.get_radius() << "\n";
    cout << "Area: " << australia2.get_area() << "\n\n";

    
     australia2.set_radius(350.0);

    cout << "Australia Circle Field 2 (After Changing Radius):\n";
    cout << "New Radius: " << australia2.get_radius() << "\n";
    cout << "New Area: " << australia2.get_area() << "\n\n";

    cout << "Australia Circle Field 3:\n";
    cout << "Radius: " << australia3.get_radius() << "\n";
    cout << "Area: " << australia3.get_area() << "\n\n";



    return 0;
}