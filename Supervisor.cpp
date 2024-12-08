/**
 * @file Supervisor.cpp
 * @author Sam Emison
 * @date 2024-12-07
 * @brief .cpp file for supervisor
 * 
 * 
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for the `Supervisor` class.
 *
 * Initializes the supervisor with default values. Sets `numSupervised` to -1.
 * The constructor also calls the base class `Employee`'s constructor to initialize inherited attributes.
 *
 * @pre None.
 * @post Sets the `numSupervised` attribute to -1.
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * @brief Parameterized constructor for the `Supervisor` class.
 *
 * Initializes the supervisor's attributes, including the inherited attributes from the `Employee` class.
 * Also sets the number of employees the supervisor manages.
 *
 * @param ID The unique identifier for the supervisor.
 * @param years The number of years the supervisor has worked.
 * @param hourlyRate The hourly pay rate for the supervisor.
 * @param hoursWorked The number of hours the supervisor has worked.
 * @param numSupervised The number of employees supervised by this supervisor.
 *
 * @pre The input parameters must be valid values for the supervisor's attributes.
 * @post Initializes the supervisor's attributes to the provided values.
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

/**
 * @brief Prints the supervisor's details.
 *
 * This method outputs the supervisor's attributes, including those inherited from `Employee`, 
 * and the specific `numSupervised` attribute.
 *
 * @pre The `Supervisor` object must be initialized.
 * @post Displays the supervisor's information on the console.
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

/**
 * @brief Calculates the total pay for the supervisor.
 *
 * This method calculates the pay for the supervisor based on their hourly rate and hours worked.
 * Additionally, it adds a bonus based on the number of employees the supervisor manages, 
 * where the bonus is 1% of the calculated pay per supervised employee.
 *
 * @pre The `Supervisor` object must be initialized with valid `hourlyRate`, `hoursWorked`, and `numSupervised` values.
 * @post Returns the calculated total pay as a `double`.
 *
 * @return The total pay for the supervisor.
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay(); //Calculate pay based on employee base class
  val = val + val * (.01 * numSupervised); //Add bonus based on number of employees supervised
  return val;
}
