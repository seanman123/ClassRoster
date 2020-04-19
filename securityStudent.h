#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

class SecurityStudent : public Student {
      public: 
            
        SecurityStudent();
        SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3 , Degree program);
        ~SecurityStudent();
        Degree getDegreeProgram();
        void Print();
     
    private: 
         Degree program;
        

};

#endif /* SECURITYSTUDENT_H */

