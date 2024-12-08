/**
 * @file Officer.cpp
 * @author Sam Emison
 * @date 2024-12-07
 * @brief .cpp file for officer class
 * 
 * 
 */

#include "Officer.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for the `Officer` class.
 *
 * Initializes the `evilness` attribute to a default value of 500.
 *
 * @pre None.
 * @post The `evilness` attribute is set to 500.
 */
Officer::Officer() {
  evilness = 500;
}

/**
 * @brief Parameterized constructor for the `Officer` class.
 *
 * Initializes the officer's attributes, including those inherited from the `Employee` class.
 *
 * @param ID The unique identifier for the officer.
 * @param years The number of years the officer has worked.
 * @param hourlyRate The hourly pay rate for the officer.
 * @param hoursWorked The number of hours the officer has worked.
 * @param evilness The level of evilness for the officer.
 *
 * @pre None.
 * @post The officer's attributes are initialized to the provided values.
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

/**
 * @brief Prints the details of the officer.
 *
 * Outputs the attributes of the officer, including inherited attributes from the `Employee` class
 * and the `evilness` attribute, to the standard output.
 *
 * @pre The `Officer` object must be initialized.
 * @post The officer's details are displayed on the console.
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

/**
 * @brief Calculates the total pay for the officer.
 *
 * Combines the officer's hourly rate with their evilness level, then multiplies by the hours worked to determine total pay.
 *
 * @pre The `Officer` object must be initialized with valid `hourlyRate`, `hoursWorked`, and `evilness` values.
 * @post None. The function simply returns the computed pay.
 *
 * @return The total pay for the officer as a `double`.
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
