#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"
using namespace std;

class Roster {
public:
    
    void add(string studentId, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program);
    void remove(string studentId);
    void printAll(); 
    void printDaysInCourse(string studentId); 
    void printInvalidEmails(); 
    void printByDegreeProgram(int degreeProgram); 
    ~Roster(); 
    
   
private:
    Student *classRosterArray[5]; 

};


#endif /* ROSTER_H */

