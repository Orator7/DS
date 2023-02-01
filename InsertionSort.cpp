#include <iostream>
using namespace std;

class Sort{
public:
  int arr[];
  int n;
  void size(){
  cout<<"enter the size of array ";
  cin>>n;
  int arr[n];
 }
 void input(){
    cout<<"enter the elements of array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 }  
    void sort(){
        for(int i=1;i<n;i++){
            int j=i-1;
            int t=arr[i];
            while(arr[j]>t && j>=0){
                int s;
                s = arr[j];
                arr[j]=arr[i];
                arr[i]=s;
            }
        }    
            
            
            
    }
 }

 }

 
};

int main()
{

}