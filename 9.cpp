 #include<bits/stdc++.h>
using namespace std; 
#define ll long long int
#define endl '\n' 


class square { 
    private: 
        int length; 
    
    public: 
        void set_length(int length) {
            this->length = length;
        } 

        friend double area(const square &sbj);
}; 

double area(const square &sbj) {
    return sbj.length * sbj.length; 
}


int main() {
         
        int  len; cin>> len; 
        square mySquare;  

        mySquare.set_length(10); 
        double ans = area(mySquare);
        
        cout<< "Area of square: "<< ans << endl; 

 

    return 0;
}