#include<iostream>

using namespace std;

class student {
  public:
    int rollNo;

    void studentData (){
      cout<<"Enter RollNo : ";
      cin>>rollNo;
    }
};
class studentMarks : public student {
  public:
    int marks1,marks2;

    void subData(){
      cout<<"Enter Subject 1 Marks : ";
      cin>>marks1;
      cout<<"Enter Subject 2 Marks : ";
      cin>>marks2;
    }
};
class result :public studentMarks{
  public:
    int total;

    void totalMarks(){
      total = marks1 + marks2;
    }
    void displayData(){
      cout<<"Student Roll No : "<<rollNo<<endl;
      cout<<"Student Subject 100 of Marks : "<<marks1<<endl;
      cout<<"Student Subject 100 of Marks : "<<marks2<<endl;
      cout<<"Total MArks OF Subject : "<<total<<endl;

    }
};

int main()
{

  result a1;
  a1.studentData();
  a1.subData();
  a1.totalMarks();
  a1.displayData();

  return 0;
}