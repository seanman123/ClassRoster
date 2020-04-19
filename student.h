#ifndef STUDENT_H
#define STUDENT_H


#include "degree.h" 

class Student {

public:
    
    // Getters
    string GetStudentId() const;
    string GetFirstName() const;
    string GetLastName() const; 
    string GetEmailAddress() const;
    int GetAge() const; 
    int* GetDaysInCourse(); 
    Degree GetProgram() const; 
    
    // Setters 
    void SetStudentId(string studentId); 
    void SetFirstName(string firstName); 
    void SetLastName(string lastName); 
    void SetEmailAddress(string emailAddress); 
    void SetAge(int age); 
    void SetDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
    void SetProgram(Degree program); 
    
    virtual void Print(); 
    
    virtual Degree getDegreeProgram(); 
    
    //constructor
    Student(); 
    Student(string studentId, string firstName, string lastName, string emAddress, int* daysInCourse);
    
    //destructor 
    ~Student();
       
private:
    string studentId; 
    string firstName; 
    string lastName; 
    string emailAddress; 
    int age;  
    int daysInCourse[3]; 
    Degree program; 
    
    
    

};
       

#endif /* STUDENT_H */

