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

// class Student
// {
//     int admno;
//     char sname[20];
//     float eng,math,science,total;
//     float ctotal(void)
//     {
//         return(eng+math+science);
//     }
//     public:
//     void Takedata(int a,const char* b,float e,float m,float s)
//     {
//         admno = a;
//         strncpy(sname,b,sizeof(sname));
//         sname[sizeof(sname)-1] = '\0';
//         eng = e;
//         math = m;
//         science = s;
//         total = ctotal();
//     }
//     void Showdata(void)
//     {
//         cout<<"Admission no. -> "<<admno<<endl;
//         cout<<"Name -> "<<sname<<endl;
//         cout<<"Marks: "<<endl;
//         cout<<"English -> "<<eng<<endl<<"Maths -> "<<math<<endl<<"Science -> "<<science<<endl;
//         cout<<"Total Marks-> "<<total<<endl;
//     }
// };
// int main()
// {
//     Student s;
//     int ad;
//     float en,ma,sc,to;
//     char na[20];
//     cout<<"Enter the details: Name, admission number, marks(eng, maths, science)"<<endl;
//     cin.getline(na,20);
//     cin>>ad>>en>>ma>>sc;
//     s.Takedata(ad,na,en,ma,sc);
//     s.Showdata();
//     return(0);
// }

// 2.  Define a class batsman with the following specifications: 
// Private members: 
// bcode                            4 digits code number 
// bname                           20 characters 
// innings, notout, runs        integer type 
// batavg                           it is calculated according to the formula – 
//                                      batavg =runs/(innings-notout) 
// calcavg()                        Function to compute batavg 
// Public members: 
// readdata()                      Function to accept value from bcode, name, innings, notout and invoke the function                                       calcavg() 
// displaydata()                   Function to display the data members on the screen. 

class Batsman
{
    int bcode,innings,notout,runs;
    char bname[20];
    float batavg;
    float calcavg(void)
    {
        if(innings == notout)
        return ((float)runs/innings);
        else
        return((float)runs/(innings - notout));
    }
    public:
    void readdata(const char* name,int c,int i,int n,int r)
    {
        strncpy(bname,name,sizeof(bname));
        bname[sizeof(bname)-1]= '\0';
        bcode = c;
        innings = i;
        notout = n;
        runs = r;
        batavg = calcavg();
    }
    void displaydata(void)
    {
        cout<<"Batter name: "<<bname<<endl;
        cout<<"Innings played: "<<innings<<" "<<"Runs: "<<runs<<endl;
        cout<<"Times Notout: "<<notout<<" "<<"Batting Average: "<<batavg<<endl;
    }
};
int main()
{
    int co,in,ru,no;
    char name[20];
    cout<<"Enter the player name-> ";
    cin.getline(name,20);
    cout<<endl<<"Enter player details (Innings,Runs,Notout,Code)-> "<<endl;
    cin>>in>>ru>>no>>co;
    Batsman b;
    b.readdata(name,co,in,no,ru);
    b.displaydata();
    return 0;
}