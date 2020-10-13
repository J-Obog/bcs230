#pragma once 

struct Course {
    std::string title; 
    int academicYear; 
    char semester; 
    float gpa;
};

struct Student {
    std::string firstName; 
    std::string lastName; 
    int numOfCourses = 0; 
    Course courses[10]; 
};
