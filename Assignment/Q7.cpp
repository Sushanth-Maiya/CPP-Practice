// 7. Write the definition for a class called Rectangle that has floating point data members length and width. The class has the following member functions: 
// void setlength(float) to set the length data member 
// void setwidth(float) to set the width data member 
// float perimeter() to calculate and return the perimeter of the rectangle 
// float area() to calculate and return the area of the rectangle 
// void show() to display the length and width of the rectangle 
// int sameArea(Rectangle) that has one parameter of type Rectangle. sameArea returns 1 if the two Rectangles have the same area, and returns 0 if they don't. 

// 1. Write the definitions for each of the above member functions. 
// 2. Write main function to create two rectangle objects. Set the length and width of the first rectangle to 5 and 2.5. Set the length     and width of the second rectangle to 5 and 18.9. Display each rectangle and its area and perimeter. 
// 3. Check whether the two Rectangles have the same area and print a message indicating the result. Set the length and width of the     first rectangle to 15 and 6.3. Display each Rectangle and its area and perimeter again. Again, check whether the two     Rectangles have the same area and print a message indicating the result.   

#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

class Rectangle
{
    private:
    float length,width;
    public:
    void setLength(float l);
    void setWidth(float w);
    float perimeter(void);
    float area(void);
    void show(void);
    int sameArea(Rectangle rhs);
};
void Rectangle::setLength(float l)
{
    length = l;
}
void Rectangle::setWidth(float w)
{
    width = w;
}
float Rectangle::perimeter(void)
{
    return ((length+width)*2);
}
float Rectangle::area(void)
{
    return (length*width);
}
void Rectangle::show(void)
{
    cout<<"The length of the rectangle is "<<length<<" and width is "<<width<<endl;
}
int Rectangle::sameArea(Rectangle rhs)
{
    if(area() == rhs.area())
    return 1;
    else
    return 0;
}
int main()
{
    Rectangle r1,r2;
    float l,w,l1,w1;
    cout<<"Enter the length: ";
    cin>>l>>l1;
    cout<<endl<<"Enter the width "<<endl;
    cin>>w>>w1;
    r1.setLength(l);
    r1.setWidth(w);
    r2.setLength(l1);
    r2.setWidth(w1);
    cout<<"Rectangle 1: "<<endl;
    r1.show();
    cout<<"Area of the rectangle is "<<r1.area()<<" and it's perimeter is "<<r1.perimeter()<<endl;
    cout<<"Rectangle 2: "<<endl;
    r2.show();
    cout<<"Area of the rectangle is "<<r2.area()<<" and it's perimeter is "<<r2.perimeter()<<endl;
    if(r1.sameArea(r2))
    cout<<"The areas of the two rectangle's are same"<<endl;
    else
    cout<<"The areas of the two rectangle's are not same"<<endl;
    return 0;
}