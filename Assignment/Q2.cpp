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

#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

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
