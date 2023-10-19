#include<iostream>
#include<math.h>
using namespace std;
int main(){

  int a, b,c;
  cin>> a>>b>>c;
  int semi_perimeter = (a+b+c)/2;
  double s = semi_perimeter;
  double area = sqrt(s*((s-a)*(s-b)*(s-c)));
  cout<< area<<endl;
  return 0;
}
