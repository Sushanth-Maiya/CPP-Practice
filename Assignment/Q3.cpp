// 3. Define a class TEST in C++ with following description: 
// Private Members 
// TestCode of type integer 
// Description of type string 
// NoCandidate of type integer 
// CenterReqd (number of centers required) of type integer 
// A member function CALCNTR() to calculate and return the number of centers as 
// (NoCandidates/100+1) 
// Public Members 
// -  A function SCHEDULE() to allow user to enter values for TestCode, Description, NoCandidate & call function CALCNTR() to calculate the number of Centres 
// - A function DISPTEST() to allow user to view the content of all the data members  

#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

class test
{
    private:
    int TestCode,NoCandidate,CenterReqd;
    string Description;
    int CALCNTR(void);
    public:
    void SCHEDULE(int t,int n,string d);
    void DISPTEST(void);
};
int test::CALCNTR(void)
{
    return (NoCandidate/100+1);
}
void test::SCHEDULE(int t,int n,string d)
{
    TestCode = t;
    NoCandidate = n;
    Description = d;
    CenterReqd = CALCNTR();
}
void test::DISPTEST(void)
{
    cout<<"TEST Content: "<<endl;
    cout<<"Test Code: "<<TestCode<<endl;
    cout<<"Number of candidates: "<<NoCandidate<<endl;
    cout<<"Description: "<<Description<<endl;
    cout<<"Centers Required: "<<CenterReqd<<endl;
}
int main()
{
    int tc,nc;
    string de;
    cout<<"Enter details: "<<endl;
    cout<<"Description-> ";
    getline(cin,de);
    cout<<endl<<"Test Code-> ";
    cin>>tc;
    cout<<endl<<"No. of candidates: ";
    cin>>nc;
    cout<<endl;
    test t;
    t.SCHEDULE(tc,nc,de);
    t.DISPTEST();
    return 0;
}