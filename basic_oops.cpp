#include<iostream>
using namespace std;

class teacher{
    private:
    double salary;
    public:
    string name;
    int age;
    string department;
    
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
    }
    void setsalary(double s){
        salary=s;
    }
};

int main(){
    teacher t1;
    t1.name="John Doe";
    t1.age=28;
    t1.department="civil engineering";
    t1.setsalary(50000.00);
    t1.display();
  return 0;
}
