#pragma once
#include <iostream> 
#include "structure.hpp"

Student student[20];
int studentStackPtr = 0; 

void addNewCourse(int id) {
   int courseCounter = student[id].numOfCourses++;
   Course newCourse; 

   std::cout << "Enter Course Title: "; 
   std::cin >> newCourse.title;

   std::cout << "Enter Course Academic Year: "; 
   std::cin >> newCourse.academicYear; 

   std::cout << "Enter Course Semester: ";
   std::cin >> newCourse.semester; 

   std::cout << "Enter Course GPA: ";
   std::cin >> newCourse.gpa; 

   student[id].courses[courseCounter] = newCourse;
}

void findStudentByName(std::string firstName, std::string lastName) {
    for(int i = 0; i < 20; i++) {
        if(student[i].firstName == firstName && student[i].lastName == lastName) {
            addNewCourse(i); 
            return; 
        }
    }
    
    std::cout << "Student could not be found" << std::endl; 
}

void findStudentByNumber() {
    int studentNo; 

    std::cout << "Please Enter the Student Number: "; 
    std::cin >> studentNo; 

    if(studentNo >= 0 && studentNo < studentStackPtr) {
        addNewCourse(studentNo); 
        return; 
    } else {
        std::cout << "Student could not be found" << std::endl; 
    }
}


void courseOptionsMenu() {
    int choice; 

    while(1) {
        switch(choice) {
            case 1:
                findStudentByNumber();
            break;

            case 2:
                //
            break;

            case 3:
                std::cout << "Exiting course menu" << std::endl;
                return;  
            break;

            default:
                std::cout << "Please enter a valid option\n\n";
            break; 
        }

        std::cout << "Please select one of the following options" << std::endl; 
        std::cout << "1) Find student by student number" << std::endl;
        std::cout << "2) Find student by first and last name" << std::endl;
        std::cout << "3) Exit course options menu" << std::endl;
        std::cout << "Option: "; 
        std::cin >> choice;  
    }     
}


void mainMenu() {
    int choice; 

    while(1) {
        switch(choice) {
            case 1:
                //
            break;

            case 2:
                courseOptionsMenu();
            break;

            case 3:
                std::cout << "Thank you for using the system" << std::endl;
                exit(0); 
            break;

            default:
                std::cout << "Please enter a valid option\n\n";
            break; 
        }

        std::cout << "Please select one of the following options" << std::endl; 
        std::cout << "1) Enter new student information" << std::endl;
        std::cout << "2) Enter new course" << std::endl;
        std::cout << "3) Exit the system" << std::endl;
        std::cout << "Option: "; 
        std::cin >> choice;  
    }     
}