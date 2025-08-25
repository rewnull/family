/* 
We need to know how to pass the function in function and how to pass class in function.
We need to know how to pass object in function.
*/

#include <iostream>
using namespace std;

class Employee 
{
  private:
    int salary;

  public:
    Employee(int s) 
    {
      salary = s;
    }

    friend void displaySalary(Employee emp); // emp ka matlab myEmp/  Employee(int s) 
};

void displaySalary(Employee emp) // emp ka matlab myEmp /  Employee(int s) 
{
  cout << "Salary: " << emp.salary;
}

int main() 
{          // jis tarah se employee a; kiya jata hai wase class banaya gaya hai like employee myemp(50000).
  Employee myEmp(50000); // Ye ek function hai jiska data type ek class hai "Employee" jo jayega Employee(int s)" me line no11 (ye 50000 s ban jayega)
  displaySalary(myEmp); // Ye call karta hai displaySalary ko jiske andar parameter hai "myEmp" ka matlab "Employee myEmp(50);" function ko paas kiya gaya hai.
  return 0;
}
