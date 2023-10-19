//      Question 1
// Try to find big number between 2 number
#include<iostream>
using namespace std;
int main(){
  int a;
  int b;
  cin>> a>>b;
try{
  if(a>b){
    cout<< a<<" is bigger than "<<b<<endl;
  }
  else {
    cout<< b<< " is bigger than "<<a<<endl;
  }
}
catch(...){
  cout<< "Something is wrong"<<endl;
  return 0;
}
}
