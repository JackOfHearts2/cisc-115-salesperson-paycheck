#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Program to calculate and display an employee's gross pay details.
// Using employee's first and last name, base salary, commission percentage,
// total sales, and expenses to calculate:
// Commission earned = (commission percentage / 100) * total sales
// Gross pay = base salary + commission earned - expenses

int main() {
  string firstName = "Kathryn";
  string lastName = "Janeway";
  double baseSalary = 1525.00;
  double commissionPercent = 3.25;
  double totalSales = 12253.78;
  double expenses = 195.75;

  double commissionEarned = (commissionPercent / 100) * totalSales;
  double grossPay = baseSalary + commissionEarned - expenses;

  cout << fixed << setprecision(2);

  cout << "Payroll data for " << firstName << " " << lastName << endl << endl;

  cout << "  Base Salary:    " << setw(8) << baseSalary << endl;

  cout << "  Commission:     " << setw(8) << commissionEarned
       << " (" << commissionPercent << "% of " << totalSales << ")" << endl;

  cout << "  Expenses:       " << setw(8) << expenses << endl;

  cout << "                 " << "--------" << endl;

  cout << "  Total:          " << setw(8) << grossPay << endl;

}
