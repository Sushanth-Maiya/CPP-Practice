// 5. Define a class BOOK with the following specifications : 
// Private members of the class BOOK are 
// BOOK NO                integer type 
// BOOKTITLE             20 characters 
// PRICE                     float (price per copy) 
// TOTAL_COST()        A function to calculate the total cost for N number of copies where N is passed to the function as argument. 
// Public members of the class BOOK are 
// INPUT()                   function to read BOOK_NO. BOOKTITLE, PRICE 
// PURCHASE()            function to ask the user to input the number of copies to be purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user. 
// Note : You are also required to give detailed function definitions.   
#include<iostream>
#include<vector>
#include"string.h"
#include<string>

using namespace std;

class BOOK
{
    int bookno;
    float price;
    char booktitle[20];
    float TOTAL_COST(int n)
    {
        return (price*n);
    }
    public:
    void INPUT(int bn,float p,const char*b)
    {
        bookno = bn;
        price = p;
        strncpy(booktitle,b,sizeof(booktitle));
        booktitle[sizeof(booktitle)-1] = '\0';
    }
    void PURCHASE(void)
    {
        int a;
        cout<<"The book "<<booktitle<<" costs "<<price<<" rupees."<<endl;
        cout<<"How many copies do you want?"<<endl;
        cin>>a;
        cout<<"Total amount to be paid is: "<<TOTAL_COST(a)<<endl;
    }
};
int main()
{
    int bon;
    float pr;
    char bt[20];
    cout<<"Enter the book details which you want->"<<endl;
    cout<<"Book number-> ";
    cin>>bon;
    cout<<endl<<"Book title-> ";
    cin.ignore();
    cin.getline(bt,20);
    cout<<endl<<"Book price-> ";
    cin>>pr;
    BOOK b1;
    b1.INPUT(bon,pr,bt);
    b1.PURCHASE();
    return 0;
}