
//    Question 2
//Try to find big number between 3 number
#include<iostream>
using namespace std;
int main(){

  int a,b,c;
  cin>> a>>b>>c;
  if(a>b && a>c){
    cout<< a <<" is bigger than other"<<endl;
  }
  else if (b>a && b> c) {
    cout<< b <<" is big Number "<<std::endl;
  }
  else if(c>a && c > b){
    cout<< c << " is big Number"<< endl;
  }
  else {
    cout<< "Failed to comparison "<<endl;
  }
  return 0;
}
