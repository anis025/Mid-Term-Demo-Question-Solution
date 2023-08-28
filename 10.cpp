 #include<bits/stdc++.h>
using namespace std; 
#define ll long long int
#define endl '\n' 

class cse37 { 
    private: 
        float cgpa; 
        ll id;  
    
    public: 
        cse37(float cgpa, ll id) {
            this->cgpa = cgpa; 
            this->id = id; 
        }

        void show_details();
}; 


void cse37 :: show_details() {
    cout<< "ID: "<< id << endl; 
    cout<<"CGPA: "<< cgpa << endl;
}


 
int main() {

    float cgpa;  cin>> cgpa; 
    ll id ;  cin>> id ;
    cse37 student = cse37(cgpa, id);
    student.show_details(); 
     

    return 0;
}








 