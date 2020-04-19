#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"

class SoftwareStudent : public Student {
    public: 
            
        SoftwareStudent();
        SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3 , Degree program);
        ~SoftwareStudent();
        Degree getDegreeProgram();
        void Print();
     
    private: 
         Degree program;
       
};

#endif /* SOFTWARESTUDENT_H */

