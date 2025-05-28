// 8. Write the definition for a class called complex that has floating point data members for storing real and imaginary parts. The class has the following member functions: 
// void set(float, float) to set the specified value in object 
// void disp() to display complex number object 
// complex sum(complex) to sum two complex numbers & return complex number 
// 1. Write the definitions for each of the above member functions. 
// 2. Write main function to create three complex number objects. Set the value in two objects and call sum() to calculate sum and assign it in third object. Display all complex numbers.  

#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

class Complex
{
    private:
    float real,imaginary;
    public:
    void set(float r,float i);
    void display(void);
    Complex sum(const Complex rhs);
};
void Complex::set(float r,float i)
{
    real = r;
    imaginary = i;
}
void Complex::display(void)
{
    cout<<"->"<<real<<"+"<<imaginary<<"i"<<endl;
}
Complex Complex::sum(const Complex rhs)
{
    real+=rhs.real;
    imaginary+=rhs.imaginary;
    return(*this);
}
int main()
{
    float re,im,re1,im1;
    cout<<"Enter real and imaginary parts of the first complex number: "<<endl;
    cin>>re>>im;
    cout<<"Enter real and imaginary parts of the second complex number: "<<endl;
    cin>>re1>>im1;
    Complex c1,c2,c3;
    c1.set(re,im);
    c2.set(re1,im1);
    cout<<"The three complex numbers are-"<<endl;
    c1.display();
    c2.display();
    c3 = c1.sum(c2);
    c3.display();
    return 0;
}