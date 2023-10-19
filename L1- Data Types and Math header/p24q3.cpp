#include<iostream>
#include<iomanip>
using namespace std;

#define PI 3.14159265
int main(){

  double r;
  cout<< "Semi-perameter of Circle by circle radius"<<endl;
  cout<< "What's the circle Radius"<<endl;
  
  cin>> r;
  double hamimFormula = 2*PI*r;
  cout<< fixed << setprecision(2);
  cout<< "Your result is "<< hamimFormula << " "<<endl;

  return 0;
}
