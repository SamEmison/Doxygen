/**
 * @file Employee.h
 * @author Sam Emison
 * @date 2024-12-07
 * @brief class file
 * 
 * 
 */


#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * @class Employee
 * @brief Represents an employee in the company.
 * 
 * The Employee class manages information about an employee, including their unique ID,
 * years of service, hourly pay rate, and hours worked. It provides methods to calculate pay,
 * handle anniversaries, and print the employee's details.
 */
class Employee {
public:
    /**
     * @brief Default constructor for Employee.
     * 
     * Initializes the employee's attributes to default values.
     */
    Employee();

    /**
     * @brief Constructs an employee with specific details.
     * 
     * @param ID The unique identifier for the employee.
     * @param years The number of years the employee has worked at the company.
     * @param hourlyRate The hourly wage for the employee.
     * @param hoursWorked The total hours worked by the employee.
     */
    Employee(int ID, int years, double hourlyRate, float hoursWorked);

    /**
     * @brief Prints the employee's details.
     * 
     * Outputs the employee's information to the console.
     */
    void print();

    /**
     * @brief Updates the employee's details for their work anniversary.
     * 
     * Increments the years of service and increases the hourly pay rate slightly.
     */
    void anniversary();

    /**
     * @brief Calculates the employee's total pay.
     * 
     * @return The total pay based on the hourly rate and hours worked.
     */
    double calculatePay();

private:
    int ID;                ///< The unique identifier for the employee.
    int years;             ///< The number of years the employee has worked at the company.
    double hourlyRate;     ///< The hourly wage of the employee.
    float hoursWorked;     ///< The total hours worked by the employee.
};

#endif // EMPLOYEE_H
