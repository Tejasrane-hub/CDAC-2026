#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


class Employee
{
private:

    int empId;
    string name;
    string department;
    char grade;
    double basicSalary;
    bool isActive;

    static int employeeCount;


public:

    Employee()
    {
        employeeCount++;

        empId = 1000 + employeeCount;

        name = "";
        department = "";
        grade = 'D';
        basicSalary = 10001;
        isActive = true;
    }


    void acceptDetails()
    {
        string inputName;
        string inputDepartment;
        char inputGrade;
        double inputSalary;


        cout << "Enter name: ";
        cin >> ws;
        getline(cin, inputName);
        setName(inputName);


        cout << "Enter department: ";
        getline(cin, inputDepartment);
        setDepartment(inputDepartment);


        cout << "Enter grade: ";
        cin >> inputGrade;
        setGrade(inputGrade);


        cout << "Enter basic salary: ";
        cin >> inputSalary;
        setBasicSalary(inputSalary);
    }



    void setName(const string& n)
    {
        if (n.empty())
        {
            cout << "ERROR: Name cannot be empty." << endl;
            return;
        }

        name = n;
    }


    void setDepartment(const string& dept)
    {
        if (dept == "Engineering" ||
            dept == "HR" ||
            dept == "Finance" ||
            dept == "Operations")
        {
            department = dept;
        }
        else
        {
            cout << "ERROR: '" << dept
                 << "' is not a registered department."
                 << endl;
        }
    }


    void setGrade(char g)
    {
        if (g == 'A' ||
            g == 'B' ||
            g == 'C' ||
            g == 'D')
        {
            grade = g;
        }
        else
        {
            cout << "ERROR: Invalid grade '" << g
                 << "'. Accepted values: A, B, C, D."
                 << endl;
        }
    }


    void setBasicSalary(double salary)
    {
        if (salary > 10000 && salary < 500000)
        {
            basicSalary = salary;
        }
        else
        {
            cout << "ERROR: Salary must be between Rs.10,000 "
                 << "and Rs.5,00,000. Value rejected."
                 << endl;
        }
    }


    void deactivate()
    {
        isActive = false;
    }


    int getEmpId() const
    {
        return empId;
    }


    string getName() const
    {
        return name;
    }


    string getDepartment() const
    {
        return department;
    }


    char getGrade() const
    {
        return grade;
    }


    double getBasicSalary() const
    {
        return basicSalary;
    }


    bool getIsActive() const
    {
        return isActive;
    }

    double computeAllowances() const
    {
        switch (grade)
        {
            case 'A':
                return basicSalary * 0.40;

            case 'B':
                return basicSalary * 0.30;

            case 'C':
                return basicSalary * 0.20;

            case 'D':
                return basicSalary * 0.10;
        }

        return 0;
    }


    double computeGrossSalary() const
    {
        return basicSalary + computeAllowances();
    }


    double computeTax() const
    {
        double gross = computeGrossSalary();

        if (gross <= 50000)
        {
            return 0;
        }
        else if (gross <= 100000)
        {
            return (gross - 50000) * 0.10;
        }
        else
        {
            return 5000 + (gross - 100000) * 0.20;
        }
    }


    double computeNetSalary() const
    {
        return computeGrossSalary() - computeTax();
    }


    void printPayslip() const
    {
        cout << "\n============================================" << endl;
        cout << "              EMPLOYEE PAYSLIP              " << endl;
        cout << "============================================" << endl;

        cout << "Emp ID         : " << empId << endl;
        cout << "Name           : " << name << endl;
        cout << "Department     : " << department << endl;
        cout << "Grade          : " << grade << endl;

        cout << "Status         : "
             << (isActive ? "Active" : "Inactive")
             << endl;

        cout << "--------------------------------------------" << endl;

        cout << fixed << setprecision(2);

        cout << "Basic Salary   : Rs. "
             << basicSalary << endl;

        double allowance = computeAllowances();

        int percentage;

        switch (grade)
        {
            case 'A':
                percentage = 40;
                break;

            case 'B':
                percentage = 30;
                break;

            case 'C':
                percentage = 20;
                break;

            default:
                percentage = 10;
        }

        cout << "Allowances (" << percentage << "%) : Rs. "
             << allowance << endl;

        cout << "Gross Salary   : Rs. "
             << computeGrossSalary() << endl;

        cout << "--------------------------------------------" << endl;

        cout << "Tax Deduction  : Rs. "
             << computeTax() << endl;

        cout << "Net Salary     : Rs. "
             << computeNetSalary() << endl;

        cout << "============================================" << endl;
    }


    static int getEmployeeCount()
    {
        return employeeCount;
    }
};


// Initialize static member

int Employee::employeeCount = 0;


struct Layout1
{
    char c1;
    int i;
    char c2;
};


struct Layout2
{
    int i;
    char c1;
    char c2;
};

int main()
{

    Employee e1;

    Employee* e2 = new Employee();

    Employee* e3 = new Employee();


    cout << "\n===== Employee 1 =====" << endl;
    e1.acceptDetails();


    cout << "\n===== Employee 2 =====" << endl;
    e2->acceptDetails();


    cout << "\n===== Employee 3 =====" << endl;
    e3->acceptDetails();


    e1.printPayslip();

    e2->printPayslip();

    e3->printPayslip();


    e3->deactivate();


    if (!e3->getIsActive())
    {
        cout << "\n"
             << e3->getName()
             << " is no longer active. Payroll skipped."
             << endl;
    }


    cout << "Total Employees : "
         << Employee::getEmployeeCount()
         << endl;



    delete e2;
    delete e3;


    cout << "\n===== Struct Padding =====" << endl;

    cout << "Size of Layout1 : "
         << sizeof(Layout1)
         << " bytes" << endl;

    cout << "Size of Layout2 : "
         << sizeof(Layout2)
         << " bytes" << endl;


    return 0;
}