#include <iostream>
using namespace std;

#include "softwareStudent.h"

//Constructor for Software Student
SoftwareStudent::SoftwareStudent() {

}

//Software Student
SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3 , Degree program){
    SetStudentId(studentId); 
    SetFirstName(firstName); 
    SetLastName(lastName);
    SetEmailAddress(emailAddress);
    SetAge(age);
    SetDaysInCourse(daysInCourse1, daysInCourse2, daysInCourse3);
    SetProgram(program); 
    
}

//Get degree of student
Degree SoftwareStudent::getDegreeProgram(){
    program = SOFTWARE; 
    return program; 
}

//Print the student. This function overrides Student::Print
void SoftwareStudent::Print(){
    cout << "\t" << "First Name: " << GetFirstName() << "\t" 
            << "Last Name: " << GetLastName() << "\t" 
            << "Age: " << GetAge()
		<< "\t" 
            << "daysInCourse: {"; cout << GetDaysInCourse()[0] << ", " << GetDaysInCourse()[1] << ", " << GetDaysInCourse()[2] << "} \t"
	    << " Degree Program: Software" << endl;
}

//Desctructor 
SoftwareStudent::~SoftwareStudent(){
}

