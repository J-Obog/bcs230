#pragma once
#include <iostream>
#include "structure.hpp"


void displayCourse(Course course) {
    //Display structure details
    std::cout << "TITLE: " << course.title << std::endl; 
    std::cout << "ACADEMIC YEAR: " << course.academicYear << std::endl; 
    std::cout << "SEMESTER: " << course.semester << std::endl; 
    std::cout << "GPA: " << course.gpa << std::endl; 
}

void addNewCourse(int id) {
    if(STUDENTS[id].numOfCourses < 10) {
        Course course;
        //Entering course details
        std::cout << "Enter Course Title: "; 
        std::cin >> course.title;
        
        std::cout << "Enter Course Academic Year: ";
        std::cin >> course.academicYear; 
        
        std::cout << "Enter Course Semester: ";
        std::cin >> course.semester; 
        
        std::cout << "Enter Course GPA: ";
        std::cin >> course.gpa; 

        STUDENTS[id].courses[STUDENTS[id].numOfCourses] = course;
        STUDENTS[id].numOfCourses++; 

        std::cout << "Course added successfully!" << std::endl; 
    } else {
        std::cout << "[ERROR] Student alread is at the max for courses taken" << std::endl; 
    }
}
