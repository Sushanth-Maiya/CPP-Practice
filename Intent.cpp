#include "HornP1.h"

Horn_intent::Horn_intent(double i,double d,string ht): intensity(i),duration(d),horn_type(ht){}

double Horn_intent::get_intensity(void)
{
    return intensity;
}

double Horn_intent::get_duration(void)
{
    return duration;
}

string Horn_intent::get_horn_type(void)
{
    return horn_type;
}

void Horn_intent::Horn(void)
{
    cout<<"The driver is honking!"<<endl;
}
Horn_intent::~Horn_intent(){}

void Warning::Horn(void)
{
    cout<<"The driver is alerting others about a potential hazard"<<endl;
}
void Prompt_movement::Horn(void)
{
    cout<<"The driver is signaling a stationary vehicle to proceed"<<endl;
}
void Frustration::Horn(void)
{
    cout<<"The driver is stuck in a traffic and is demanding movement"<<endl;;
}
void friendly::Horn(void)
{
    cout<<"The driver might be giving a friendly \"Hi\""<<endl;
}

void Horn_intent_recognition(void)
{
    vector<Horn_intent*> hin;
    int hdetect;
    bool check;
    int times;
    double a,b;
    string htyp;
    int start;
    while(1)
    {
        cout<<"Hello"<<endl;
        cin>>hdetect;
        if(hdetect == 0)
        check = false;
        else
        check = true;
        if(check)
        {
            cout<<"Horn detected!"<<endl;
            cin>>a;
            cin.ignore();
            if(a>93 && a<112)
            {
                cin>>b>>times;
                if(times == 1 && b>2.5)
                htyp = "Prolonged";
                else if(times == 2 && b<=2.5)
                htyp = "Two short";
                else if(times == 1 && b<=2.5)
                htyp = "Short";
                else
                htyp = "Long repeated";
                cout<<"Identifying the INTENT"<<endl;
                if(htyp == "Prolonged")
                {
                    Warning *warn = new Warning(a,b,htyp);
                    warn->Horn();
                    hin.push_back(warn);
                }
                else if(htyp == "Two short")
                {
                    Prompt_movement *pm = new Prompt_movement(a,b,htyp);
                    pm->Horn();
                    hin.push_back(pm);
                }
                else if(htyp == "Short")
                {
                    friendly *fr = new friendly(a,b,htyp);
                    fr->Horn();
                    hin.push_back(fr);
                }
                else if(htyp == "Long repeated")
                {
                    Frustration *frus = new Frustration(a,b,htyp);
                    frus->Horn();
                    hin.push_back(frus);
                }
                else
                cout<<"Error in detecting horn intent!"<<endl;
            }
            else
            cout<<"The sound detected is not in Horn's audio freq range.."<<endl<<"Returning."<<endl<<"Hello"<<endl;
        }
        else
        continue;
        cout<<"Do you want to check the recorded data?(Press 10 for yes)"<<endl;
        cin>>start;
        if(start==10)
        {
            cout<<"Data recorded so far:"<<endl;
            for(auto i: hin)
            {
                cout<<"Horn intensity: "<<i->get_intensity()<<endl<<"Horn Duration: "<<i->get_duration()<<endl<<"Horn Type: "<<i->get_horn_type()<<endl;
                cout<<endl;
            }
            for(auto j: hin)
            {
                delete(j);
            }
        }
        else
        continue;
    }
}