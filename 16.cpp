//employee details using class
#include<iostream>
using namespace std;
class Employee
{
    public:
        string m_name {};
        int m_id {};
        double m_wages {};
        //printing employee information

        void printdetails(){
            cout<<"Name: " << m_name << " Id: "<< m_id<< " Wage: "<< m_wages<< "\n";
        }
    

};
int main(){
    //Declaring employees
    Employee object { "Emp A", 256, 20000};
    Employee object2 {"Emp B", 261, 25000};
    object.printdetails();
    object2.printdetails();
    return 0;
}
