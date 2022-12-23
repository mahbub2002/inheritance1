#include<iostream>
using namespace std;

class Employee
{

protected :
    string eid, ename, edesignation;
    double basic,medical,house,tax,salary;

    double calculate_salary()
    {

        cout<< "Employee Name = "  << ename <<endl;
        cout<< "Employee ID   = "  << eid <<endl;
        cout<< "Employee designation = "<< edesignation <<endl<<"============"<<endl;

        cout<< " Basic salary = "<<endl;
        cin>>basic;
        cout<< "medical  = "<< endl;
        cin>>medical;
        cout<< "house  = "<<endl;
        cin>>house;
        tax = basic * 0.10;
        salary = (basic+medical+house)-tax;
        return salary;

    }
public:

    Employee() {}
    Employee(string ename, string eid,string edesignation)
    {

        this -> ename = ename;
        this -> eid = eid;
        this -> edesignation = edesignation;
    }

    double getsalary()
    {

        double x= calculate_salary();
        cout<< "Salary after paying tax = "<< x <<endl;
        cout<< "****************** "<<endl;
    }
};

class Engineer : public Employee
{

public :
    Engineer() {}
    Engineer(string ename, string eid,string edesignation)
    {
        this -> ename = ename;
        this -> eid = eid;
        this -> edesignation = edesignation;

    }

    double getsalary()
    {
        double  extra = 10000;
        double y= calculate_salary() + extra;
        cout<< "Salary after paying tax = "<< y <<endl;
        cout<< "****************** "<<endl;


    }




};


int main()
{

    Employee();
    Employee a1("Mahbub", "Cse2202026011", "assistant secretary");
    a1.getsalary();

    Engineer();
    Engineer a2("Arman ", "355314516", "Assistant Engineer");
    a2.getsalary();

}
