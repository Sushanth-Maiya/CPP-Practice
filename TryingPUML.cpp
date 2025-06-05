#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Car
{
    string name;
    int hp,t_speed;
    public:
    Car(string n,int h,int s):name(n), hp(h), t_speed(s){}
    virtual void type(void) = 0;
};
class bmw_suv: public Car
{
    public:
    using Car::Car;
    void type(void) override{
        cout<<"It is a suv and it's price is 85 Lacks"<<endl;
    }
};
class bmw_coupe: public Car
{
    public:
    using Car::Car;
    void type(void) override
    {
        cout<<"It is a coupe and it's price is 1.5 Crores"<<endl;
    }
};
int main()
{
    //vector<Car*> c;
    string na;
    int p,t;
    cout<<"Input details of the car you want: "<<endl;
    getline(cin,na);
    cin>>p>>t;
    if(na=="bmw x7")
    {
        bmw_suv *a = new bmw_suv(na,p,t);
        a->type();
        //c.push_back(a);
    }
    else if(na=="bmw m4")
    {
        bmw_coupe *b = new bmw_coupe(na,p,t);
        b->type();
        //c.push_back(b);
    }
    return 0;
}