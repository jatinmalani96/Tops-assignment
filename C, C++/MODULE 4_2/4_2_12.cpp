#include<iostream>

using namespace std;

class SwapNumber{
     int a,b;
  public:

    void swap(){
       cout<<"Enter First Number : ";
       cin>>a;
       cout<<"Enter Second Number : ";
       cin>>b;
    }

   friend void twoSwapNumber(SwapNumber &);

   void display(){
    cout<<"After Swapping Number A Is: "<<a<<endl;
    cout<<"After Swapping Number B Is: "<<b<<endl;
   }

};

void twoSwapNumber(SwapNumber & s1){

  cout<<"Befor Swapping : "<<s1.a<<" "<<s1.b<<endl;

   s1.a = s1.a + s1.b;
   s1.b = s1.a - s1.b;
   s1.a = s1.a - s1.b;

  //  cout<<"After Swapping : "<<s1.a<<" "<<s1.b<<endl;
}


int main()
{

  SwapNumber a1;
  a1.swap();
  twoSwapNumber(a1);
  a1.display();

  return 0;
}