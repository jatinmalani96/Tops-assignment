#include<iostream>

using namespace std;

class Matrix{
  public:
  int arr[10],answer[10];



  void getData(){

    for(int i=0; i<5; i++){
      cout<<"Enter Array Value : ";
      cin>>arr[i];
    }
  }
  Matrix operator + (Matrix &obj){
    for(int i=0; i<5; i++){
      answer[i]=0;
      answer[i] = arr[i] + obj.arr[i];
    }
  }

  void showData(){
    for(int i=0; i<5; i++){
      cout<<"Matrix Array Addition : "<<i+1<<"  :  "<<answer[i]<<endl;
      // cout<<endl<<"Matrix Array Addition : "<<endl<<i+1<<endl<<arr[i];
    }
  }

};

int main()
{
  Matrix a1;
  Matrix b1;
  a1.getData();
  b1.getData();
  a1 + b1;
  a1.showData();

  return 0;
}