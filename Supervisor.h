/**
 * @file Supervisor.h
 * @author Sam Emison
 * @date 2024-12-07
 * @brief Class file for supervisor
 * 
 * 
 */


#Ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * @class Supervisor
 * @brief Represents a supervisor, which is a type of employee that supervises other employees.
 *
 * The `Supervisor` class inherits from `Employee` and adds an attribute for the number of employees 
 * that the supervisor manages (`numSupervised`). It overrides methods such as `print` to include supervisor-specific 
 * details and `calculatePay` to compute the pay based on the supervisor's hourly rate and the number of hours worked.
 */
class Supervisor : public Employee {
 private:
   /**
   * @brief The number of employees supervised by this supervisor.
   *
   * This attribute tracks how many employees the supervisor manages.
   */
  int numSupervised;
 public:
  /**
   * @brief Prints the details of the supervisor.
   *
   * This method prints the supervisor's information, including inherited attributes from `Employee` 
   * and their own `numSupervised` value.
   *
   * @pre The `Supervisor` object must be initialized.
   * @post Displays the supervisor's details on the console.
   */
  void print();
   /**
   * @brief Calculates the total pay for the supervisor.
   *
   * This method calculates the supervisor's pay by considering the hourly rate and the number of hours worked.
   * It may include additional factors based on the supervisor's specific attributes.
   *
   * @pre The `Supervisor` object must be initialized with valid `hourlyRate`, `hoursWorked`, and `numSupervised` values.
   * @post None. Returns the total calculated pay.
   *
   * @return The total pay for the supervisor as a `double`.
   */
  double calculatePay();
  /**
   * @brief Default constructor for the `Supervisor` class.
   *
   * Initializes the `Supervisor` object with default values for the attributes, including setting 
   * `numSupervised` to 0 by default.
   *
   * @pre None.
   * @post Sets the `numSupervised` attribute to 0.
   */
  Supervisor();
   /**
   * @brief Parameterized constructor for the `Supervisor` class.
   *
   * Initializes the supervisor's attributes, including those inherited from the `Employee` class, and sets 
   * the number of employees supervised.
   *
   * @param ID The unique identifier for the supervisor.
   * @param years The number of years the supervisor has worked.
   * @param hourlyRate The hourly pay rate for the supervisor.
   * @param hoursWorked The number of hours the supervisor has worked.
   * @param numSupervised The number of employees supervised by this supervisor.
   *
   * @pre None.
   * @post Initializes the supervisor's attributes to the provided values.
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
