
#include<bits/stdc++.h>
using namespace std; 
#define ll long long int 
#define endl '\n' 

class cse36 {
    private: 
        string name; 
        int id, section, intake; 
       
    
    public: 
        cse36(const string &name, int id, int section) {
            this->name = name; 
            this->id = id; 
            this->section = section; 
            this->intake = 36; 
        }

        void show_details();
};
 

void cse36 :: show_details() {
    cout<<"Name: " << name << endl; 
    cout<<"ID: "<< id << endl ; 
    cout<<"Section: "<< section << endl; 
    cout<<"Intake: " << intake << endl;
}

int main() {

    const int numOfStudent = 5; 
    // Create an array of objects of class cse36
    cse36 students[numOfStudent] = {
        cse36("Anisul", 025, 1), 
        cse36("Fatema", 006, 1), 
        cse36("Inkul", 010, 2), 
        cse36("Tushar", 021, 2), 
        cse36("Rabbil", 253, 5)

    };

    // Display the information of all students
    for (int i = 0; i < 5; ++i) {
        students[i].show_details();
    }


    return 0;
}


 