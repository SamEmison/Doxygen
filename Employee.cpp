/**
 * @file Employee.cpp
 * @author Sam Emison
 * @date 2024-12-07
 * @brief .cpp file for employee class
 * 
 * Functionality for employee class
 */


#include "Employee.h"
#include <iostream>

using namespace std;


/**
 * @brief Default constructor for employee
 * 
 * @pre None 
 * @post The Employee object's attributes (`ID`, `years`, `hourlyRate`, and `hoursWorked`)
 *       are initialized to -1, indicating uninitialized or invalid states.
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}


/**
 * @brief Constructs an Employee with specific attributes.
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre None
 * @post The employye object is initialized with provided values
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

/**
 * @brief Prints the details of the employee.
 *
 * Outputs the employee's ID, years of service, hourly rate, and hours worked to the standard output.
 *
 * @pre None.
 * @post The employee's information is displayed on the console.
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

/**
 * @brief Updates the employee's information for their work anniversary.
 *
 * Increases the employee's years of service by 1 and applies a 0.2% raise to their hourly rate.
 *
 * @pre The `Employee` object must be initialized.
 * @post The employee's `years` is incremented, and `hourlyRate` is updated to reflect a 0.2% raise.
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

/**
 * @brief Calculates the total pay for the employee.
 *
 * Multiplies the employee's hourly rate by the hours worked to determine total pay.
 *
 * @pre The `Employee` object must be initialized with valid `hourlyRate` and `hoursWorked` values.
 * @post None. The function simply returns the computed pay.
 *
 * @return The total pay for the employee as a `double`.
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

