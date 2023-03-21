#include<iostream>

using namespace std;

class person {

  public:
    string name;
    int age;

    void personData(){
      cout<<"Enter Name : ";
      getline(cin,name);
      cout<<"Enter Age : ";
      cin>>age;
    }
};

class student {

  public:
    float percentage;

    void studentData(){
      cout<<"Enter Student Percentage : ";
      cin>>percentage;
    }

};
class teacher{
    public:
      int salary;

      void teacherData(){
           cout<<"Enter Teacher Salary : ";
           cin>>salary;
      }
};

class member :public person ,public student , public teacher{

    public:

      void display(){
       cout<<"Person Name : "<<name<<endl;
       cout<<"Person Age : "<<age<<endl;
       cout<<"Student Percentage Is : "<<percentage<<endl;
       cout<<"Teacher Salary Is : "<<salary<<endl;
      }

};


int main()
{
  member a1;
  a1.personData();
  a1.studentData();
  a1.teacherData();
  a1.display();

  return 0;
}