#include "ParkP1.h"
data_in::data_in(int cs, double as): car_speed(cs), available_space(as){}
int data_in::get_car_speed(void)
{
    return(car_speed);
}
double data_in::get_avail_space(void)
{
    return(available_space);
}
void parkit(int cs, int count)
{
     while(1)
    {
        bool park,confirm;
        std::cout<<"Do you want to park? (1 for yes and 0 for no)"<<std::endl;
        std::cin>>park;
        if(!park)
        {
            continue;
        }
        else{
            std::vector <data_in*> sensor_in;
            int speed;
            double space;
            while(1)
            {
                std::cout<<"Getting sensor data...."<<std::endl;
                std::cin>>speed>>space;
                data_in*ptr = new data_in(speed,space);
                sensor_in.push_back(ptr);
                if(ptr->get_car_speed()>30)
                {
                    std::cout<<"Parking not possible right now, please slow down!"<<std::endl;
                }
                else if(ptr->get_avail_space()>(cs+0.7))
                    {
                        std::cout<<"Parking slot available! Do you want to park here?"<<std::endl;
                        std::cin>>confirm;
                        if(confirm)
                        cout<<"Parking Successful"<<endl;
                        else
                        cout<<"Finding other spot..."<<endl;
                    }
                    else{
                        continue;
                    }
            }
            data_in* last = sensor_in.back();
            sensor_in.pop_back();
            delete last;
            std::cout<<"Available parking slots for cars with length greater than 4 and less than 8: "<<std::endl;
            for(data_in* s : sensor_in)
            {
                if(s->get_avail_space()>4.7 && s->get_avail_space()<8.7)
                {
                    count++;
                }
            }
            std::cout<<count<<std::endl;
            for(data_in* d : sensor_in)
            {
                delete d;
            }
        }
    }
}