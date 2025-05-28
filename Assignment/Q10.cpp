// 10. Write the definition for a class called time that has hours and minutes as integer. The class has the following member functions: 
//  void settime(int, int) to set the specified value in object 
//  void showtime() to display time object 
//  time sum(time) to sum two time object & return time 
//  1. Write the definitions for each of the above member functions. 
//  2. Write main function to create three time objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all time objects.   

#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

class time
{
    private:
    int hours,minutes;
    public:
    void setTime(int h,int m);
    void showTime(void);
    time sum(const time rhs);
};
void time::setTime(int h,int m)
{
    hours = h;
    minutes = m;
}
void time::showTime(void)
{
    cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
}
time time::sum(const time rhs)
{
    hours+=rhs.hours;
    minutes+=rhs.minutes;
    if(minutes >= 60)
    {
        hours++;
        minutes-=60;
    }
    return(*this);
}
int main()
{
    int h1,h2,m1,m2;
    cout<<"Set the first time data->"<<endl;
    cout<<"Hour-> ";
    cin>>h1;
    cout<<endl<<"Minute-> ";
    cin>>m1;
    cout<<endl<<"Set the second time data->"<<endl;
    cout<<"Hour-> ";
    cin>>h2;
    cout<<endl<<"Minute-> ";
    cin>>m2;
    time t1,t2,t3;
    t1.setTime(h1,m1);
    t2.setTime(h2,m2);
    cout<<"Time set 1: ";
    t1.showTime();
    t3 = t1.sum(t2);
    cout<<"Time set 2: ";
    t2.showTime();
    cout<<"Time set 3: ";
    t3.showTime();
    return 0;
}