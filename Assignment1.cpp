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

// class Batsman
// {
//     int bcode,innings,notout,runs;
//     char bname[20];
//     float batavg;
//     float calcavg(void)
//     {
//         if(innings == notout)
//         return ((float)runs/innings);
//         else
//         return((float)runs/(innings - notout));
//     }
//     public:
//     void readdata(const char* name,int c,int i,int n,int r)
//     {
//         strncpy(bname,name,sizeof(bname));
//         bname[sizeof(bname)-1]= '\0';
//         bcode = c;
//         innings = i;
//         notout = n;
//         runs = r;
//         batavg = calcavg();
//     }
//     void displaydata(void)
//     {
//         cout<<"Batter name: "<<bname<<endl;
//         cout<<"Innings played: "<<innings<<" "<<"Runs: "<<runs<<endl;
//         cout<<"Times Notout: "<<notout<<" "<<"Batting Average: "<<batavg<<endl;
//     }
// };
// int main()
// {
//     int co,in,ru,no;
//     char name[20];
//     cout<<"Enter the player name-> ";
//     cin.getline(name,20);
//     cout<<endl<<"Enter player details (Innings,Runs,Notout,Code)-> "<<endl;
//     cin>>in>>ru>>no>>co;
//     Batsman b;
//     b.readdata(name,co,in,no,ru);
//     b.displaydata();
//     return 0;
// }

// 3. Define a class TEST in C++ with following description: 
// Private Members 
// TestCode of type integer 
// Description of type string 
// NoCandidate of type integer 
// CenterReqd (number of centers required) of type integer 
// A member function CALCNTR() to calculate and return the number of centers as 
// (NoCandidates/100+1) 
// Public Members 
// -  A function SCHEDULE() to allow user to enter values for TestCode, Description, NoCandidate & call function CALCNTR() to calculate the number of Centres 
// - A function DISPTEST() to allow user to view the content of all the data members  

// class test
// {
//     int TestCode,NoCandidate,CenterReqd;
//     string Description;
//     int CALCNTR(void)
//     {
//         return (NoCandidate/100+1);
//     }
//     public:
//     void SCHEDULE(int t,int n,string d)
//     {
//         TestCode = t;
//         NoCandidate = n;
//         Description = d;
//         CenterReqd = CALCNTR();
//     }
//     void DISPTEST(void)
//     {
//         cout<<"TEST Content: "<<endl;
//         cout<<"Test Code: "<<TestCode<<endl;
//         cout<<"Number of candidates: "<<NoCandidate<<endl;
//         cout<<"Description: "<<Description<<endl;
//         cout<<"Centers Required: "<<CenterReqd<<endl;
//     }
// };
// int main()
// {
//     int tc,nc;
//     string de;
//     cout<<"Enter details: "<<endl;
//     cout<<"Description-> ";
//     getline(cin,de);
//     cout<<endl<<"Test Code-> ";
//     cin>>tc;
//     cout<<endl<<"No. of candidates: ";
//     cin>>nc;
//     cout<<endl;
//     test t;
//     t.SCHEDULE(tc,nc,de);
//     t.DISPTEST();
//     return 0;
// }

// 4.  Define a class in C++ with following description: 
// Private Members 
// A data member Flight number of type integer 
// A data member Destination of type string 
// A data member Distance of type float 
// A data member Fuel of type float 
// A member function CALFUEL() to calculate the value of Fuel as per the following criteria 
//             Distance                                                          Fuel 
//             <=1000                                                           500 
//             more than 1000  and <=2000                          1100 
//             more than 2000                                              2200 
// Public Members 
// A function FEEDINFO() to allow user to enter values for Flight Number, Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel 
// A function SHOWINFO() to allow user to view the content of all the data members   

// class Kingfisher
// {
//     int flight_no;
//     float distance,fuel;
//     string destination;
//     float CALFUEL(void)
//     {
//         if(distance<=1000)
//         return (500);
//         else if(distance>1000 && distance<=2000)
//         return (1100);
//         else
//         return (2200);
//     }
//     public:
//     void FEEDINFO(int f,float di,string d)
//     {
//         flight_no = f;
//         distance = di;
//         destination = d;
//         fuel = CALFUEL();
//     }
//     void SHOWINFO(void)
//     {
//         cout<<"Flight Details: "<<endl;
//         cout<<"Flight number: "<<flight_no<<endl;
//         cout<<"Destination: "<<destination<<" "<<"Distance: "<<distance<<endl;
//         cout<<"Fuel required: "<<fuel<<endl;
//     }
// };
// int main()
// {
//     Kingfisher k;
//     int fn;
//     string de;
//     float di;
//     cout<<"Enter flight details: "<<endl;
//     cout<<"Flight number-> ";
//     cin>>fn;
//     cout<<endl<<"Destination->";
//     cin.ignore();
//     getline(cin,de);
//     cout<<endl<<"Distance-> ";
//     cin>>di;
//     cout<<endl;
//     k.FEEDINFO(fn,di,de);
//     k.SHOWINFO();
// }

// 5. Define a class BOOK with the following specifications : 
// Private members of the class BOOK are 
// BOOK NO                integer type 
// BOOKTITLE             20 characters 
// PRICE                     float (price per copy) 
// TOTAL_COST()        A function to calculate the total cost for N number of copies where N is passed to the function as argument. 
// Public members of the class BOOK are 
// INPUT()                   function to read BOOK_NO. BOOKTITLE, PRICE 
// PURCHASE()            function to ask the user to input the number of copies to be purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user. 
// Note : You are also required to give detailed function definitions.   

class BOOK
{
    int bookno;
    float price;
    char booktitle[20];
    float TOTAL_COST(int n)
    {
        return (price*n);
    }
    public:
    void INPUT(int bn,float p,const char*b)
    {
        bookno = bn;
        price = p;
        strncpy(booktitle,b,sizeof(booktitle));
        booktitle[sizeof(booktitle)-1] = '\0';
    }
    void PURCHASE(void)
    {
        int a;
        cout<<"The book "<<booktitle<<" costs "<<price<<" rupees."<<endl;
        cout<<"How many copies do you want?"<<endl;
        cin>>a;
        cout<<"Total amount to be paid is: "<<TOTAL_COST(a)<<endl;
    }
};
int main()
{
    int bon;
    float pr;
    char bt[20];
    cout<<"Enter the book details which you want->"<<endl;
    cout<<"Book number-> ";
    cin>>bon;
    cout<<endl<<"Book title-> ";
    cin.ignore();
    cin.getline(bt,20);
    cout<<endl<<"Book price-> ";
    cin>>pr;
    BOOK b1;
    b1.INPUT(bon,pr,bt);
    b1.PURCHASE();
    return 0;
}