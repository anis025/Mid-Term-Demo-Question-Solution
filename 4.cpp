#include<bits/stdc++.h>
using namespace std; 
#define ll long long int 
#define endl '\n' 

 
class Student {
    public:
 
       string name;
        int id;
        float cgpa;

        Student(const string &name, int id, float cgpa) {
            this->name = name; 
            this->id = id; 
            this->cgpa = cgpa;
        }

        float getCGPA(){
            return cgpa;
        }
};

// Function to calculate the average CGPA of an array of students
float averageCGPA(Student students[], int numStudents) {
    float totalCGPA = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        totalCGPA += students[i].getCGPA();
    }
    return totalCGPA / numStudents;
}

int main() {
    const int numStudents = 2;
    
    // Create an array of Student objects
    Student students[numStudents] = {
        Student("Anis", 101, 3.8),
        Student("Fatema", 102, 3.9)
    };

    // Calculate and display the average CGPA using function overloading
    float ans = averageCGPA(students, numStudents);
    std::cout << "Average CGPA of all students: " << ans <<  endl;

    return 0;
}
