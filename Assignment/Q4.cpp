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

#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

class Kingfisher
{
    int flight_no;
    float distance,fuel;
    string destination;
    float CALFUEL(void)
    {
        if(distance<=1000)
        return (500);
        else if(distance>1000 && distance<=2000)
        return (1100);
        else
        return (2200);
    }
    public:
    void FEEDINFO(int f,float di,string d)
    {
        flight_no = f;
        distance = di;
        destination = d;
        fuel = CALFUEL();
    }
    void SHOWINFO(void)
    {
        cout<<"Flight Details: "<<endl;
        cout<<"Flight number: "<<flight_no<<endl;
        cout<<"Destination: "<<destination<<" "<<"Distance: "<<distance<<endl;
        cout<<"Fuel required: "<<fuel<<endl;
    }
};
int main()
{
    Kingfisher k;
    int fn;
    string de;
    float di;
    cout<<"Enter flight details: "<<endl;
    cout<<"Flight number-> ";
    cin>>fn;
    cout<<endl<<"Destination->";
    cin.ignore();
    getline(cin,de);
    cout<<endl<<"Distance-> ";
    cin>>di;
    cout<<endl;
    k.FEEDINFO(fn,di,de);
    k.SHOWINFO();
}