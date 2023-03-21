#include<iostream>

using namespace std;

 template <class t>

class Swap{

  t a, b;

  public:
      Swap(t x,t y){
        a = x;
        b = y;
      }

      void SwappingNumber(){
        cout<<"Befor Swapping A : "<<a<<endl;
        cout<<"Befor Swapping B : "<<b<<endl;
        t temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"The Swapping Number A : "<<a<<endl;
        cout<<"The Swapping Number B : "<<b<<endl;
      }

};

int main()
{
   Swap <int>a1(5, 4);
   a1.SwappingNumber();
  return 0;
}