#include<iostream>
using namespace std;


class line
{
   public:
              inline float mul(float a,float b)
              {
                            return(a*b);
              }
              inline float cube(float a)
              {
                            return(a*a*a);
              }
};

int main()
{
              line obj;
              float value1,value2;

              cout<<"\nEnter 1st value :: ";
              cin>>value1;
              cout<<"\nEnter 2nd value :: ";
              cin>>value2;
              cout<<"\nMultiplication value is :: "<<obj.mul(value1,value2);
              cout<<"\n\nCube value of  [ " <<obj.cube(value1)<<" ] is :: ["<<obj.cube(value2)<<" ]\n";

              return 0;
}
