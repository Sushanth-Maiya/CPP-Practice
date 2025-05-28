// 9. Write the definition for a class called Distance that has data member feet as integer  and inches as float. The class has the following member functions: 
// void set(int, float) to give value to object 
// void disp() to display distance in feet and inches 
// Distance add(Distance) to sum two distances & return distance 
// 1. Write the definitions for each of the above member functions. 
// 2. Write main function to create three Distance objects. Set the value in two objects and call add() to calculate sum and assign it in third object. Display all distances.   

#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

class Distance
{
    private:
    int feet;
    float inches;
    public:
    void set(int f,float i);
    void disp(void);
    Distance add(const Distance rhs);
};
void Distance::set(int f,float i)
{
    feet = f;
    inches = i;
}
void Distance::disp(void)
{
    cout<<inches<<" inches and "<<feet<<" feet"<<endl;
}
Distance Distance::add(const Distance rhs)
{
    feet+=rhs.feet;
    inches+=rhs.inches;
    return (*this);
}
int main()
{
    int fe,f1;
    float in,i1;
    cout<<"Enter the first set of distance->"<<endl;
    cout<<"Feet-> ";
    cin>>fe;
    cout<<endl<<"Inch-> ";
    cin>>in;
    cout<<endl<<"Enter the second set of distance->"<<endl;
    cout<<"Feet-> ";
    cin>>f1;
    cout<<endl<<"Inch-> ";
    cin>>i1;
    Distance d1,d2,d3;
    d1.set(fe,in);
    d2.set(f1,i1);
    cout<<"Distances u entered: "<<endl;
    cout<<"1. ";
    d1.disp();
    cout<<endl<<"2. ";
    d2.disp();
    d3 = d1.add(d2);
    cout<<endl<<"3. ";
    d3.disp();
    cout<<endl;
    return 0;
}