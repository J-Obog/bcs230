#pragma once  
#include "course.hpp"


void displayStudentInfo(int id) {
    //Outputing student structure details
    std::cout << "----------- STUDENT INFORMATION -----------" << std::endl;
    std::cout << "FIRST NAME: " << STUDENTS[id].firstName << std::endl; 
    std::cout << "LAST NAME: " << STUDENTS[id].lastName << std::endl; 
    std::cout << "------- COURSES (" << STUDENTS[id].numOfCourses << ") -------" << std::endl;

    for(int i = 0; i < STUDENTS[id].numOfCourses; i++) {
        displayCourse(STUDENTS[id].courses[i]); 
    } 
    
    std::cout << "---------------------------------" << std::endl;
}

void addNewStudent() {
    if(NUM_OF_STUDENTS < 20) {
        Student student; 
        //Entering student info
        
        std::cout << "Student First Name: "; 
        std::cin >> student.firstName;
        
        std::cout << "Student Last Name: "; 
        std::cin >> student.lastName; 

        STUDENTS[NUM_OF_STUDENTS++] = student;

        std::cout << "Student added successfully!" << std::endl; 
    } else {
        std::cout << "[ERROR] School is already filled to capacity!" << std::endl; 
    }
}