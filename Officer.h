/**
 * @file Officer.h
 * @author Sam Emison
 * @date 2024-12-07
 * @brief Class file for officer
 * 
 * 
 */


#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @class Officer
 * @brief Represents an officer, which is a type of employee with additional "evilness" attribute.
 *
 * The `Officer` class inherits from `Employee` and extends it with an `evilness` attribute. It overrides 
 * methods like `print` to display the officer's details and `calculatePay` to compute the pay based on 
 * hourly rate and the `evilness` level.
 */
class Officer : public Employee {
 private:
  /**
   * @brief The "evilness" level of the officer.
   *
   * This attribute determines the officer's level of evilness, which impacts their pay calculation.
   */
  double evilness;
 public:
    /**
   * @brief Prints the details of the officer.
   *
   * This method prints the officer's information, including the inherited attributes from `Employee` 
   * and the officer's own `evilness` level.
   *
   * @pre The `Officer` object must be initialized.
   * @post Displays the officer's details on the console.
   */
  void print();
  
  /**
   * @brief Calculates the total pay for the officer.
   *
   * This method calculates the officer's pay by adding their `evilness` to the hourly rate and multiplying 
   * by the hours worked.
   *
   * @pre The `Officer` object must be initialized with valid `hourlyRate`, `hoursWorked`, and `evilness` values.
   * @post None. Returns the total calculated pay.
   *
   * @return The total pay for the officer as a `double`.
   */
  double calculatePay();
   /**
   * @brief Default constructor for the `Officer` class.
   *
   * Initializes the officer's `evilness` attribute to 500 by default.
   *
   * @pre None.
   * @post Sets the `evilness` attribute to 500.
   */
  Officer();
   /**
   * @brief Parameterized constructor for the `Officer` class.
   *
   * Initializes the officer's attributes, including those inherited from the `Employee` class, and sets 
   * the officer's `evilness`.
   *
   * @param ID The unique identifier for the officer.
   * @param years The number of years the officer has worked.
   * @param hourlyRate The hourly pay rate for the officer.
   * @param hoursWorked The number of hours the officer has worked.
   * @param evilness The level of evilness for the officer.
   *
   * @pre None.
   * @post Initializes the officer's attributes to the provided values.
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
