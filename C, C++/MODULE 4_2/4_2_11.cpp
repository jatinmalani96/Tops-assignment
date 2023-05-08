#include<iostream>

using namespace std;

class BankAccount{
  public:

  string name,accountType;
  int accountNumber,amount;

  void getData(){
    cout<<"Enter Depositor Name : ";
    getline(cin,name);
    cout<<"Enter Bank Account Type : ";
    getline(cin,accountType);
    cout<<"Enter Account Number : ";
    cin>>accountNumber;
    cout<<"Enter Amount : ";
    cin>>amount;
  }
  void Deposit(){
     int deposit;
       cout<<"Enter Deposit Amount : ";
       cin>>deposit;
       amount = amount + deposit;
       cout<<"After Deposit Total Amount : "<<amount<<endl;
  }
  void Withdraw(){
    int withdraw;
    cout<<"Balance Amount : "<<amount<<endl;
    cout<<"Enter Withdraw Amount : ";
    cin>>withdraw;

      if(amount>withdraw){
        amount = amount - withdraw;
        cout<<"After Withdraw Balance : "<<amount<<endl;
      }else{
        cout<<"Not Enough Balance !! "<<endl;
      }
  }
   void Display(){
        cout<<"***************Account Details*************"<<endl;
        cout<<"Account Holder Name  : "<<name<<endl;
        cout<<"Account Type         : "<<accountType<<endl;
        cout<<"Account Number       : "<<accountNumber<<endl;
        cout<<"Account Balance      : "<<amount<<endl;
      }

};

int main()
{

  BankAccount a1;
  a1.getData();
  int choice;
  cout<<"Enter Choice List : "<<endl;
  cout<<"1) To assign values : "<<endl;
  cout<<"2) Deposit : "<<endl;
  cout<<"3) Withdraw : "<<endl;
  cout<<"4) Exit : "<<endl;
  cout<<"Enter The Choice : ";
  cin>>choice;

  switch (choice)
  {
    case 2:
        a1.Deposit();
        a1.Display();
    break;

    case 3:
        a1.Withdraw();
        a1.Display();
    break;

    case 4:
        exit(0);
      break;

  default:
      cout<<"Invalid Option !!!...";
    break;
  }

  return 0;
}