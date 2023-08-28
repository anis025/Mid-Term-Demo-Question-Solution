#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
#define endl '\n'

class Registration { 
    private: 
        vector<string> numOfCourse;  
    public: 
        void ChooseCourse(const string &courseName); 
        void printChoosenCourse();
};


void Registration :: ChooseCourse(const string &courseName)  { 
      
        if(numOfCourse.size() < 6) {
            numOfCourse.push_back(courseName); 
            cout << "Course '" << courseName << "' added to your choices." << endl ;
        }

        else  {
            cout << "You have already chosen the maximum number of courses." << endl;
        }
 
}


void Registration :: printChoosenCourse() {
    cout<< "Chosen Courses: "<< endl; 
    for(const string &course : numOfCourse) 
        cout<<"-" << course << endl; 
}

int main() {

    Registration reg; 
    reg.ChooseCourse("CSE_121"); 
    reg.ChooseCourse("Mathematics");  
    reg.printChoosenCourse(); 

    reg.ChooseCourse("Physics"); 
    reg.ChooseCourse("Discrete Math"); 
    reg.ChooseCourse("CSE-103"); 
    reg.ChooseCourse("English-II"); 

    reg.printChoosenCourse(); 

    reg.ChooseCourse("Statistics");
    reg.printChoosenCourse();



    return 0;
}








 