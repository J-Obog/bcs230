#pragma once
#include "student.hpp"

int findStudentByName() {
    std::string fn, ln;  
    //Inputting query info
    std::cout << "Enter Student First Name: "; 
    std::cin >> fn; 

    std::cout << "Enter Student Last Name: "; 
    std::cin >> ln; 

    for(int i = 0; i < NUM_OF_STUDENTS; i++) {
        if(STUDENTS[i].firstName == fn && STUDENTS[i].lastName == ln) {
            return i; 
        }
    }
    return -1; 
}

int findStudentByNumber() {
    int num; 
    //Inputting query info
    std::cout << "Enter Student Number: "; 
    std::cin >> num; 

    for(int i = 0; i < NUM_OF_STUDENTS; i++) {
        if(i == num) {
            return i; 
        }
    }
    return -1;
}

void courseOptionsMenu() {
    int choice; 
    int num; 

    //Decision-making control
    while(1) {
        std::cout << "============== COURSE OPTION MENU ===============" << std::endl; 
        std::cout << "1) Find student by student number" << std::endl;
        std::cout << "2) Find student by first and last name" << std::endl;
        std::cout << "3) Go back to main menu" << std::endl;
        std::cout << "Option: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                num = findStudentByNumber();
                if(num == -1) {
                    std::cout << "[ERROR] Unable to find student with the specified number" << std::endl;
                } else {
                    displayStudentInfo(num);
                    addNewCourse(num);
                }
            break;

            case 2:
                num = findStudentByName();
                if(num == -1) {
                    std::cout << "[ERROR] Unable to find student with the specified name" << std::endl;
                } else {
                    displayStudentInfo(num);
                    addNewCourse(num);
                }
            break;

            case 3:
                std::cout << "Exiting course menu" << std::endl;
                return;  
            break;

            default:
                std::cout << "[ERROR] Please enter a valid option\n\n";
            break;
        }
    }     
}

void mainMenu() {
    int choice; 

    //Decision-making control
    while(1) {
        std::cout << "============== MAIN MENU ===============" << std::endl; 
        std::cout << "Please select one of the following options" << std::endl; 
        std::cout << "1) Enter new student information" << std::endl;
        std::cout << "2) Enter new course" << std::endl;
        std::cout << "3) Exit the system" << std::endl;
        std::cout << "Option: ";
        std::cin >> choice; 
        
        switch(choice) {
            case 1:
                addNewStudent();
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
    }     
}