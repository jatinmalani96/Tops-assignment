#include<iostream>

using namespace std;

class String {

  string str1;

  public:

     string str;

 void getData(){
    cout<<"Enter String 1 : ";
    getline(cin,str1);
  }
  void showData(){
    cout<<"String Concatenate : "<<str<<endl;
  }

  String operator + (String s1){
         str= str1 + s1.str1;
  }

};

int main()
{
   String s,s2;
   s.getData();
   s2.getData();
   s + s2;
   s.showData();

  return 0;
}