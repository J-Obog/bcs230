#include <iostream>
using namespace std; 


int DAYS[12] = {31,28,31,31,30,30,31,31,30,31,30,31}; //Array to store number in months

void setDate(int&, int&, int&); //For reading in date values
bool isLeap(int); // For checking if a year is a leap year
void displayAge(int, int, int, int, int, int); //For displaying user age

int main() {
    int bMonth, bDay, bYear, tMonth, tDay, tYear; //Variables for dates

    cout << "ENTER DOB" << endl;  
    setDate(bMonth, bDay, bYear); //Setting birthdate

    cout << "ENTER TODAY'S DATE" << endl;
    setDate(tMonth, tDay, tYear); //Setting today's date

    cout << "YOUR AGE" << endl; 
    displayAge(tMonth, tDay, tYear, bMonth, bDay, bYear); //Displaying age
}

bool isLeap(int year) {
    return year % 100 == 0 && year % 400 == 0; //Check if year is divisible by 100 and 400
}

void setDate(int& month, int& day, int& year) {
    cout << "Enter Month: "; 
    cin >> month; 
    cout << "Enter Day: "; 
    cin >> day; 
    cout << "Enter Year: ";
    cin >> year;
    cout << '\n'; 
}

void displayAge(int eMonth, int eDay, int eYear, int sMonth, int sDay, int sYear) {
    int months, days, years; //Variables to hold calculated values
    if(sDay > eDay) {
        //Borrowing days from previous month
        if(--eMonth == 2 && isLeap(eYear)) { //If borrowing from a February leap month 
            days = 29 + (eDay - sDay);
        } else {
            days = DAYS[eMonth - 1] + (eDay - sDay);
        }
    } else {
        days = eDay - sDay; //If no borrowing is neccessary
    }
    if(sMonth > eMonth) { //Borrowing months from previous year
        eYear--; 
        months = (eMonth + 12) - sMonth;  
    } else {
        months = eMonth - sMonth; //If no borrowing is neccessary
    }
    years = eYear - sYear; //Find difference between years

    //Output information    
    cout << "Years: " << years << endl; 
    cout << "Months: " << months << endl; 
    cout << "Days: " << days << endl;
};
