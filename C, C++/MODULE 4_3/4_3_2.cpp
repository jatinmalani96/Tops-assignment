#include<iostream>

using namespace std;

class SortArray{
  public:

  void getData(int arr[],int n){
    for(int i=0; i<n; i++){
      cout<<"Enter Array Element : ";
      cin>>arr[i];
    }
  }

    void sort(int arr[],int n){

      for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

          int temp;

          if(arr[i]>arr[j]){

            temp = arr[i];

            arr[i] = arr[j];

            arr[j] = temp;
          }
        }
      }
    }
};

int main()
{
  int arr[10];
  int a;
  cout<<"Enter Number : ";
  cin>>a;
   SortArray s1;
   s1.getData(arr,a);
   s1.sort(arr,a);
   cout<<"After Sorting Are Array : "<<endl;
   for(int i=0; i<a; i++){
    cout<<arr[i]<<" ";
   }
  return 0;
}