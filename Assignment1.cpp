#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

// 1. Define a class student with the following specification 
// Private members of class student 
// admno                        integer 
// sname                        20 character 
// eng. math, science       float 
// total                            float 
// ctotal()                        a function to calculate eng + math + science with float return type. 
// Public member function of class student 
// Takedata()                   Function to accept values for admno, sname, eng, science and invoke ctotal() to calculate total. 
// Showdata()                   Function to display all the data members on the screen.   

class Student
{
    int admno;
    char sname[20];
    float eng,math,science,total;
    float ctotal()
    {
        return(eng+math+science);
    }
    public:
    void Takedata(int a,const char* b,float e,float m,float s)
    {
        admno = a;
        strncpy(sname,b,sizeof(sname));
        sname[sizeof(sname)-1] = '\0';
        eng = e;
        math = m;
        science = s;
        total = ctotal();
    }
    void Showdata(void)
    {
        cout<<"Admission no. -> "<<admno<<endl;
        cout<<"Name -> "<<sname<<endl;
        cout<<"Marks: "<<endl;
        cout<<"English -> "<<eng<<endl<<"Maths -> "<<math<<endl<<"Science -> "<<science<<endl;
        cout<<"Total Marks-> "<<total<<endl;
    }
};
int main()
{
    Student s;
    int ad;
    float en,ma,sc,to;
    char na[20];
    cout<<"Enter the details: Name, admission number, marks(eng, maths, science)"<<endl;
    cin.getline(na,20);
    cin>>ad>>en>>ma>>sc;
    s.Takedata(ad,na,en,ma,sc);
    s.Showdata();
    return(0);
}