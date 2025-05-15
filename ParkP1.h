#ifndef PARKP1_H
#define PARKP1_H

#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;
class data_in
{
    private:
    int car_speed;
    double available_space;
    public:
    data_in(int cs, double as);
    int get_car_speed(void);
    double get_avail_space(void);
};
void parkit(int cs, int count);

#endif