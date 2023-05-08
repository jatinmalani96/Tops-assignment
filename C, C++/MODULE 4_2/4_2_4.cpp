#include<iostream>

using namespace std;

inline int cube(int a){
  return (a*a*a);
}

int main()
{
  cout<<"The Multiplication Cubic Is : "<<cube(5);
  return 0;
}