#pragma once 

//Course structure
struct Course {
    std::string title; 
    int academicYear; 
    char semester; 
    float gpa;
};

//Student structure
struct Student {
    std::string firstName; 
    std::string lastName; 
    int numOfCourses = 0; 
    Course courses[10]; 
};

//globals
Student STUDENTS[20];
int NUM_OF_STUDENTS = 0; 