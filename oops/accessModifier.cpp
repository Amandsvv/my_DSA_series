#include<iostream>
#include<vector>
using namespace std;
class Teacher{
private:    
    double salary = 25000;

public:
    string name;
    int id;

    double getSalary(){
        return salary;
    }

    void setSalary(double salary){
        this->salary = salary;
    }
};
int main (){
    Teacher t1;
    t1.name = "Aman Kumar";
    t1.id = 2224006;
    t1.setSalary(2000.00);

    cout<<"Name : "<<t1.name<<" Id : "<<t1.id<<" Salary : "<<t1.getSalary()<<endl;
    return 0;
}