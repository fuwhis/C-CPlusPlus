#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl << endl;
    int tax;
    float salary, cTax, netSalary = 0;

    cout << "Input salary: " ;
    cin >> salary;

    if (salary >= 15)
    {
        cTax = (salary*30)/100;
        tax = 30;
    } else if(salary >= 7 && salary < 15)
    {
        cTax = (salary*20)/100;
        tax = 20;
    } else
    {
        cTax = (salary*10)/100;
        tax = 10;
    }
    netSalary = salary - cTax;
    cout << "Salary = " << salary << " million." << endl;
    cout << "Tax cost of " << tax << "% of your income is " << cTax  << " million." << endl;
    cout << "The salary that you can receive is " << netSalary << " million." << endl;

    return 0;
}
