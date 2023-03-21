#include<iostream>

using namespace std;

class calculator
{
  public:
   int a,b;
   int sum;

   void first(){
   cout<<"ENter First Number : ";
   }
   void second(){
    cout<<"Enter Second Number : ";
   }
   int addition(){
    sum = a + b;
    cout<<"Addition : "<<sum;
   }
   int subtraction(){
    sum = a - b;
    cout<<"Subtraction : "<<sum;
   }
   int multiplication(){
    sum = a * b;
    cout<<"Multiplication : "<<sum;
   }
   int division(){
    sum = a / b;
    cout<<"Division : "<<sum;
   }

};

int main()
{
    calculator x;
    int ch;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter Number : ";
    cin>>ch;

    switch (ch)
    {
    case 1:
         x.first();
         cin>>x.a;
         x.second();
         cin>>x.b;
         x.addition();
      break;

      case 2:
         x.first();
         cin>>x.a;
         x.second();
         cin>>x.b;
         x.subtraction();
      break;

      case 3:
           x.first();
           cin>>x.a;
           x.second();
           cin>>x.b;
           x.multiplication();
      break;

       case 4:
           x.first();
           cin>>x.a;
           x.second();
           cin>>x.b;
           x.division();
      break;

    default:
        cout<<"ENter The Number 1-4!!!....";
      break;
    }
  return 0;
}