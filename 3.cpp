#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
#define endl '\n'

class Right_Triangle{
    private: 
        int p, b; 
    
    public:
        Right_Triangle(int p, int b) {
            this->p = p; 
            this->b = b; 
        } 

        int area(); 
        int diagonal();
};

int Right_Triangle :: area() {
    return 0.5* p *b; 
} 
 
int Right_Triangle :: diagonal() {
    return sqrt(pow(p, b));
}


int main() {

    int p , b; cin>> p >> b; 
    Right_Triangle triangle = Right_Triangle(p, b); 
    double ans = triangle.area();
    cout<<"Area of the right-angled triangle: " <<  ans<< endl ;  
    double diagonal = triangle.diagonal();
    cout<< "Diagonal of the right-angled triangle: " << diagonal  << endl;



    return 0;
}

/* 
4. Write a class named Student. A Studenthas name, id and CGPA. Create two objects of the above mentioned class. Show the average CGPA of all of them using Function overloading topic. */