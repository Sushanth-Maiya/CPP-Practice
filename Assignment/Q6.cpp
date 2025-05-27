// 6. Define a class REPORT with the following specification: 
// Private members : 
// adno                         4 digit admission number 
// name                        20 characters 
// marks                       an array of 5 floating point values 
// average                    average marks obtained 
// GETAVG()                 a function to compute the average obtained in five subject 
// Public members: 
// READINFO()              function to accept values for adno, name, marks. Invoke the function GETAVG()             
// DISPLAYINFO()          function to display all data members of report on the screen. 
// You should give function definitions.

#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

class REPORT
{
    int adno,marks[5];
    float average;
    char name[20];
    float GETAVG(void)
    {
        int sum =0;
        for(int i=0;i<5;++i)
        {
            sum+=marks[i];
        }
        return (((float)sum)/5);
    }
    public:
    void READINFO(int a,const int*m,const char* na)
    {
        adno = a;
        strncpy(name,na,sizeof(name));
        name[sizeof(name)-1] = '\0';
        for(int j=0;j<5;++j)
        {
            marks[j] = m[j];
        }
        average = GETAVG();
    }
    void DISPLAYINFO(void)
    {
        cout<<"Student Information: "<<endl;
        cout<<"Admission number: "<<adno<<endl<<"Student Name: "<<name<<endl;
        cout<<"Marks Obtained: "<<endl;
        for(int k=0;k<5;++k)
        {
            cout<<marks[k]<<" ";
        }
        cout<<endl<<"Average: "<<average<<endl;
    }
};
int main()
{
    int an,n[5];
    char s[20];
    cout<<"Enter student data:"<<endl;
    cout<<"Admission no.-> ";
    cin>>an;
    cout<<endl<<"Name-> ";
    cin.ignore();
    cin.getline(s,20);
    cout<<endl<<"Marks obtained-> ";
    for(int i=0;i<5;++i)
    {
        cin>>n[i];
    }
    REPORT r;
    r.READINFO(an,n,s);
    r.DISPLAYINFO();
    return 0;
}