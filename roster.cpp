#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

#include "roster.h"
#include "degree.h"
#include "student.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"

int addToBack = 0; 

const string studentData[] =
            {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
            "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
            "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
            "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
            "A5,Sean,Dunaway,sdunaway5@wgu.edu,25,30,20,10,SOFTWARE"}; 
    
  const int NUMBER_OF_STUDENTS = sizeof(studentData)/sizeof(studentData[0]);

 void Roster::add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program){
     
     if(program == NETWORK) {
         classRosterArray[addToBack++] = new NetworkStudent(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, program);
         
     }
     
     if(program == SECURITY) {
         classRosterArray[addToBack++] = new SecurityStudent(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, program);
     }
     
     if(program == SOFTWARE){
        classRosterArray[addToBack++] = new SoftwareStudent(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, program);
     }
     
     int daysInCourse[] = {daysInCourse1, daysInCourse2, daysInCourse3 };
     
 }
 
 
 void Roster::remove(string studentId){
     bool isRemoved = false; 
     int i = 0; 
     
     for(i = 0; i < 5; ++i){
         if (classRosterArray[i] != 0) {
             if(studentId == classRosterArray[i]->GetStudentId()) {
                 classRosterArray[i] = nullptr; 
                 isRemoved = true; 
             }
         }
     }
     
     if ( isRemoved == false ) {
         cout << "Invalid Student ID: " << studentId << " was not found." << endl; 
         cout << endl; 
     }
 }
 
void Roster::printDaysInCourse(string studentId) {
    
    int i = 0; 
    int average = 0; 
    int day1 = 0;
    int day2 = 0; 
    int day3 = 0; 
    
     if(studentId == "all") {
     
        for(i = 0; i < 5; ++i) {        
            day1 = (classRosterArray[i])->GetDaysInCourse()[0];
            day2 = (classRosterArray[i])->GetDaysInCourse()[1];
            day3 = (classRosterArray[i])->GetDaysInCourse()[2];
            average = (day1 + day2 + day3) / 3; 
            cout << "The average days for student with ID: " << classRosterArray[i]->GetStudentId() << " is " << average << endl; 
        }
    
    }
    else {
         for(i = 0; i < NUMBER_OF_STUDENTS; ++i) {
            if ((classRosterArray[i])->GetStudentId() == studentId) {

                day1 = (classRosterArray[i])->GetDaysInCourse()[0];
                day2 = (classRosterArray[i])->GetDaysInCourse()[1];
                day3 = (classRosterArray[i])->GetDaysInCourse()[2];

                average = (day1 + day2 + day3) / 3; 

                cout << "The average days for student with ID: " << studentId << " is " << average << endl; 
            }
        }
    }
    
    cout << endl; 
}

void Roster::printInvalidEmails() {
    int i = 0;   
    
    cout << "Invalid Emails: " << endl; 

    for(i = 0; i < NUMBER_OF_STUDENTS; ++i) {
        string email = (classRosterArray[i]->GetEmailAddress());
       
        if (email.find(".") == -1 || email.find("@") == -1 || email.find(" ") != -1) {
            cout << "\t" << email << endl;
        }   
    }
    
    cout << endl; 
}

void Roster::printByDegreeProgram(int degreeProgram){
    int i = 0; 
    
    cout << "Students in specified program: " << endl; 
    
    for(i = 0; i < NUMBER_OF_STUDENTS; ++i) {
        
        if(degreeProgram == classRosterArray[i]->getDegreeProgram()){
            
            classRosterArray[i]->Print(); 
          
        }    
    }
    
    cout << endl;     
    
}
 

 void Roster::printAll() {
     cout<< "Roster:" << endl;
  for (int i = 0; i < NUMBER_OF_STUDENTS; ++i) {
      classRosterArray[i]->Print();
  }
     
     cout << endl; 
     
}
 
 
 

int main() {
   
    int i = 0;     
      
    	//Roster Instance
	Roster classRoster;

	// Degree Instance
	Degree program;
	
	
	for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
		
            vector<string> studentInfo;
            
            stringstream stringStream(studentData[i]);   

		while (stringStream.good()) {
			string userString;
			getline(stringStream, userString, ',');
			studentInfo.push_back(userString);
		}
                
		if (studentInfo[8] == "SECURITY") {
			program = SECURITY;
		}
                
		if (studentInfo[8] == "SOFTWARE") {
			program = SOFTWARE;
		}
                
		if (studentInfo[8] == "NETWORK") {
			program = NETWORK;
		}
		
                classRoster.add(studentInfo[0], studentInfo[1], studentInfo[2], studentInfo[3], stoi(studentInfo[4]), stoi(studentInfo[5]),
			stoi(studentInfo[6]), stoi(studentInfo[7]), program);
	}
        
        cout << "Sean Dunaway" << endl; 
        cout << "ID: #001189337" << endl; 
        cout << "Scripting and Programming - Applications – C867" << endl; 
        cout << "Coded in C++ Language" << endl; 
        
        cout << endl; 
        
        classRoster.printAll(); 
        
        classRoster.printInvalidEmails();
        
        classRoster.printDaysInCourse("all");
        
        classRoster.printByDegreeProgram(SOFTWARE);
   
        classRoster.remove("A3"); 
        
        classRoster.remove("A3"); 
   
    return 0; 

}

Roster::~Roster() {
}

