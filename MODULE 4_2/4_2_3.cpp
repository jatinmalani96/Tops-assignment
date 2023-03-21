#include<iostream>

using namespace std;

class cricketer
{
   public:
     int run[10];
     string name;
     int total = 0;
     int bestPerformance = 185;

     void gateData(){
        cout<<"Enter Name : ";
        cin.ignore();
        getline(cin,name);
        // cout<<"Enter Run : ";
        // cin>>run;
        for(int i=0; i<5; i++){
          cout<<"5 Inning Run : "<<i+1<<"score : ";
          cin>>run[i];
          total+=run[i];
        }
     }

    //  void setData(){
    //   cout<<"Batsmen Run : "<<name<<endl<<run<<endl;
    //  }
};

class batsmen : public cricketer{
  public:
      int averageRuns;

      void batsmenAverage(){
         averageRuns = total/5;  // 5 Inning Run Data;
      }

      void displayData(){
        cout<<"Batsman Name : "<<name<<endl;
        cout<<"Batsman Total Run : "<<total<<endl;
        cout<<"Batsman Average : "<<averageRuns<<endl;
        cout<<"Batsmen Bast Performance : "<<bestPerformance<<endl;
      }

};


int main()
{
  cricketer a1;
  batsmen a2;
  a2.gateData();
  a2.batsmenAverage();
  a2.displayData();

  // a1.setData();

  return 0;
}