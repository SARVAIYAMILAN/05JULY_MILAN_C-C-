#include<iostream>
using namespace std;

class bank
{
 private:
     float p;
     float r;
     float t;
     float si;
     float amount;

 public:
    void read ( )
          {
                 cout <<" Enter Principle Amount : ";
                 cin>>p ;
                 cout<<"\n Enter Rate of Interest : ";
                 cin>>r;
                 cout <<"\n Enter Number of years : ";
                 cin>>t;

                 si= (p *r*t) /100;
                 amount = si + p;

          }

    void show( )
         {
         		cout<<"\n____________________________";
                cout<<"\n Entered Details are : \n";
                cout<<"\n Principle Amount: "<<p;
                cout <<"\n Rate of Interest: "<<r;
                cout <<"\n Number of years: "<<t;
                cout <<"\n Interest : "<<si;
                cout <<"\n Total Amount : "<<amount<<"\n";
         }
};


int main ()
{
    bank b1;

    b1.read();
    b1.show();

    return 0;
}

