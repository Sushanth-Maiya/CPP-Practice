//Simple code including a class
// #include <iostream>
// #include <string>
// using namespace std;
// class stud
// {
//     public:
//     string name;
//     int age;
//     private:
//     int marks;
// };
// int main()
// {
//     stud student;
//     cout<<"Input name: "<<endl;
//     getline(cin,student.name);
//     cout<<"Input age"<<endl;
//     cin>>student.age;
//     cout<<"Name: "<<student.name<<endl<<"Age: "<<student.age<<endl;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// class stud
// {
//     public:
//     void setter(string a, int b, int c)
//     {
//         name = a;
//         age = b;
//         marks = c;
//     }
//     string getname(void)
//     {
//         return(name);
//     }
//     int getage(void)
//     {
//         return(age);
//     }
//     int getmarks(void)
//     {
//         return(marks);
//     }
//     private:
//     string name;
//     int age;
//     int marks;
// };
// int main()
// {
//     stud student;
//     string n;
//     int ag,m;
//     cout<<"Input age, marks and name "<<endl;
//     cin>>ag>>m;
//     cin.ignore();//To clear the leftover newline after precious cin
//     getline(cin,n);
//     student.setter(n,ag,m);
//     cout<<"Name: "<<student.getname()<<endl<<"Age: "<<student.getage()<<endl<<"Marks: "<<student.getmarks()<<endl;
// }
//Using Constructor
// #include <iostream>
// #include <string>
// using namespace std;
// class stud
// {
//     public:
//     stud(string a, int b, int c)
//     {
//         name = a;
//         age = b;
//         marks = c;
//     }
//     string getname(void)
//     {
//         return(name);
//     }
//     int getage(void)
//     {
//         return(age);
//     }
//     int getmarks(void)
//     {
//         return(marks);
//     }
//     private:
//     string name;
//     int age;
//     int marks;
// };
// int main()
// {
//     string n;
//     int ag,m;
//     cout<<"Input age, marks and name "<<endl;
//     cin>>ag>>m;
//     cin.ignore();//To clear the leftover newline after precious cin
//     getline(cin,n);
//     stud student(n,ag,m);//Constructor
//     cout<<"Name: "<<student.getname()<<endl<<"Age: "<<student.getage()<<endl<<"Marks: "<<student.getmarks()<<endl;
//     if(student.getage()<18 && student.getmarks()>85)
//     {
//         cout<<student.getname()<<" can play this game for 2 hours!"<<endl;
//     }
//     else if(student.getage()>=18 && student.getage()<24 && student.getmarks()>75)
//     {
//         cout<<student.getname()<<" can play this game for 6 hours!"<<endl;
//     }
//     else if(student.getage()>=24)
//     {
//         cout<<student.getname()<<" can play this game for 10 hours!"<<endl;
//     }
//     else
//     {
//         cout<<student.getname()<<" cannot play this game!"<<endl;
//     }

// }
//Polymorphism
// #include <iostream>
// #include <vector>
// using namespace std;

// // Base class
// class Shape {
// public:
//     virtual void draw() {
//         cout << "Drawing a generic shape" << endl;
//     }

//     // Virtual destructor is important for proper cleanup
//     virtual ~Shape() {}
// };

// // Derived class 1
// class Circle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing a circle" << endl;
//     }
// };

// // Derived class 2
// class Rectangle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing a rectangle" << endl;
//     }
// };

// // Derived class 3
// class Triangle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing a triangle" << endl;
//     }
// };

// int main() {
//     // Vector of base class pointers
//     vector<Shape*> shapes;

//     // Dynamically allocate different shapes
//     shapes.push_back(new Circle());
//     shapes.push_back(new Rectangle());
//     shapes.push_back(new Triangle());

//     // Call draw() on each shape — this uses polymorphism
//     for (Shape* s : shapes) {
//         s->draw();  // Output depends on the actual object
//     }

//     // Clean up memory
//     for (Shape* s : shapes) {
//         delete s;
//     }

//     return 0;
// }
//Copy constructor
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Employee
{
    private:
    int emp_id,age,salary;
    string name,nt_id;
    public:
    Employee(int eid,int a, int s, string n, string nid): emp_id(eid),age(a),salary(s),name(n),nt_id(nid){}
    Employee(){}
    ~Employee(){}
    int get_emp_id(void)
    {
        return emp_id;
    }
    int get_age(void)
    {
        return age;
    }
    int get_salary(void)
    {
        return salary;
    }
    string get_name(void)
    {
        return name;
    }
    string get_nt_id(void)
    {
        return nt_id;
    }
};
Employee* assign()
{
    cout<<"Enter the employee details:"<<endl;
    int id,b,c;
    string d,e;
    cout<<"Name: ";
    //cin.ignore();
    getline(cin,d);
    cout<<"Age ";
    cin>>b;
    cout<<"Employee ID: ";
    cin>>id;
    cout<<"NT ID: ";
    cin.ignore();
    getline(cin,e);
    cout<<"Salary: ";
    cin>>c;
   return new Employee(id,b,c,d,e);
}
void display(Employee *a)
{
    cout<<"You entered:"<<endl;
    cout<<"Name: "<<a->get_name()<<endl<<"Age: "<<a->get_age()<<endl<<"Employee ID: "<<a->get_emp_id()<<endl;
    cout<<"Employee NT ID: "<<a->get_nt_id()<<endl<<"Employee Salary: "<<a->get_salary()<<endl;
}
int main()
{
    Employee* e1;
    e1=assign();
    display(e1);
    Employee *e2;
    e2 = e1;
    cout<<"After calling copy constructor: "<<endl;
    display(e2);
    Employee *e3 = assign();
    cout<<"Before assignment constructor is called: "<<endl;
    display(e3);
    cout<<"After assignment constructor is called: "<<endl;
    e3 = e1;
    display(e3);
    delete (e1);
    delete (e2);
    delete (e3);
}
