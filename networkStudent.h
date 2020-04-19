#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "student.h"
using namespace std; 

class NetworkStudent : public Student {
    public: 
            
        NetworkStudent();
        NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3 , Degree program);
        ~NetworkStudent();
        Degree getDegreeProgram();
        void Print();
        
    private:   
         Degree program; 
    
           
};

#endif /* NETWORKSTUDENT_H */

