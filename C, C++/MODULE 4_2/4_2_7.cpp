#include<iostream>
using namespace std;

class Mathematic
{
    public:
       int a,b,answer;
      //  Mathematic(){
      //       cout<<"Enter Value 1 : ";
      //       cin>>a;
      //       cout<<"Enter Value 2 : ";
      //       cin>>b;
      //  }

      int sum(int a,int b){
         answer = a + b;
        cout<<"Addition  : "<<answer<<endl;
      }

      int sum(int c,int d,int g){
         answer = c - d - g;
         cout<<"Subtraction : "<<answer<<endl;
      }

      int sum(int m,int n,int o,int p){
        answer = m * n * o * p;
        cout<<"Multiplication : "<<answer<<endl;
      }

      float sum(float e,double f){
       float answer = e / f;
        cout<<"Division : "<<answer<<endl;
      }
};

int main()
{
  Mathematic a1;
  a1.sum(50,40);
  a1.sum(50,30,10);
  a1.sum(5,3,20,4);
  a1.sum(100.0,30.0);

  return 0;
}