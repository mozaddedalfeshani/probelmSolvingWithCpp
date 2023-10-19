//Find the angle of triangle
//given 3 length of line
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
  
  float a,b,c;
  cout<< "Enter the value of triangle "<<endl;
  cout<< "a: ";cin>>a;
  cout<< "b: ";cin>>b;
  cout<< "c: ";cin>>c;
  cout<< "Here the angle of a and b (hight and base)"<<endl;
  cout<<fixed<<setprecision(2);
  cout<< atan(a/b)<<endl;
  cout<< "Here the angle of b and c (base and hypotenuse)"<<endl;
  cout<<acos(b/c)<<endl;
  cout<< "Here the angle of c and a (hypotenuse and hight)"<<endl;
  cout<<asin(a/c)<<endl;
  return 0;
}
