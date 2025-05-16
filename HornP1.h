#ifndef HornP1_h
#define HornP1_h

#include<iostream>
#include<vector>
#include<string>
#include<memory>

using namespace std;

class Horn_intent
{
    private:
    double intensity,duration;
    string horn_type;

    public:
    Horn_intent(double i,double d,string ht);
    double get_intensity(void);
    double get_duration(void);
    string get_horn_type(void);
    virtual void Horn(void);
    virtual ~Horn_intent();
};
class Warning: public Horn_intent
{
    public:
    using Horn_intent::Horn_intent;
    void Horn(void) override;
};
class Prompt_movement: public Horn_intent
{
    public:
    using Horn_intent::Horn_intent;
    void Horn(void) override;
};
class Frustration: public Horn_intent
{
    public:
    using Horn_intent::Horn_intent;
    void Horn(void) override;
};
class friendly: public Horn_intent
{
    public:
    using Horn_intent::Horn_intent;
    void Horn(void) override;
};

void Horn_intent_recognition(void);

#endif