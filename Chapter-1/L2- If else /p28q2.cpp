//Hey this problem is so easy to solve in Array But we can't use 
//coz this only if else type question 

#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cin>> a>>b>>c;
  if(a>b && a>c && b > c){
    cout<< c<<" "<<b<< " "<<a<<endl;
  }
  else if(b>a && b> c && a > c){
    cout<< c <<" "<< a<<" "<<b<<endl;
  }
  else if(c> b && c> a && b>a){
    cout<< a<<" "<< b<< " "<<c<<endl;

  }

  else if(c> b && c> a && b<a){
    cout<< b<<" "<< a<< " "<<c<<endl;

  }

  return 0;
}
