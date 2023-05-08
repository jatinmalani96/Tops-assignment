#include<iostream>

using namespace std;



class MaxNumber{
  int x,y;
   public:

      void getData(){
       cout<<"Enter Number First : ";
       cin>>x;
       cout<<"Enter Number Second : ";
       cin>>y;
      }

      friend void maxNumber(MaxNumber );
};


void maxNumber(MaxNumber o1){
    if(o1.x > o1.y){
      cout<<"This Number X Is Greater : "<<o1.x<<endl;
    }else if(o1.x < o1.y){
      cout<<"This Number Y Is Greater : "<<o1.y<<endl;
    }else{
      cout<<"Both Number Are Equal !!!..";
    }
}

int main()
{
  MaxNumber s1;
  s1.getData();
  maxNumber(s1);

  return 0;
}