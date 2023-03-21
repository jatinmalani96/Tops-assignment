#include<iostream>

using namespace std;

 int area(int r){
    return (3.14 * r * r);
 }
 int area(int l ,int b){
  return(l * b);
 }
 float area(float a ,float h,float bs ){
  return(a * h * bs);
 }

int main()
{
   int r,l,b;
   float h,bs;

   cout<<"Enter Radius of Circle : ";
   cin>>r;
   cout<<"Enter Breadth and length of Rectangle : ";
   cin>>l>>b;
   cout<<"Enter Base and Height of Triangle : ";
   cin>>bs>>h;

   cout<<"Area of Circle : "<<area(r)<<endl;
   cout<<"Area of Rectangle : "<<area(l,b)<<endl;
   cout<<"Area of Triangle : "<<area(0.5,h,bs)<<endl;

  return 0;
}