#include <iostream>
using namespace std;
#include "student.h"

    // Getters
    string Student::GetStudentId() const {
        return studentId; 
    }
    string Student::GetFirstName() const {
        return firstName; 
    }
    string Student::GetLastName() const {
        return lastName; 
    }
    
    string Student::GetEmailAddress() const {
        return emailAddress; 
    }
    
    int Student::GetAge() const {
        return age; 
    } 
    
     int *Student::GetDaysInCourse() {
        return daysInCourse; 
    }
    
    Degree Student::GetProgram() const {
        return program; 
    }
    
    // Setters 
    void Student::SetStudentId(string studentId) {
        this->studentId = studentId; 
    }
    void Student::SetFirstName(string firstName) {
        this->firstName = firstName; 
    }
    
    void Student::SetLastName(string lastName) {
        this->lastName = lastName; 
    }
    
    void Student::SetEmailAddress(string emailAddress) {
        this->emailAddress = emailAddress; 
    }
    void Student::SetAge(int age) {
        this->age = age; 
    }
    void Student::SetDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
        this->daysInCourse[0] = daysInCourse1; 
        this->daysInCourse[1] = daysInCourse2; 
        this->daysInCourse[2] = daysInCourse3;
    } 
    void Student::SetProgram(Degree program) {
        this->program = program; 
    } 
    
    void Student::Print(){
    
    }
    
    Degree Student::getDegreeProgram(){
   
    }
    
    //constructor
    Student::Student(){
         
    } 

    //Default Constructor for student 
    Student::Student(string studentId, string firstName, string lastName, string emAddress, int* daysInCourse) {
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->daysInCourse[0] = daysInCourse[0];
	this->daysInCourse[1] = daysInCourse[1];
	this->daysInCourse[2] = daysInCourse[2];
}
    
    //destructor 
    Student::~Student() {
        // cout << "I am a desctructor" << endl; 
    }




