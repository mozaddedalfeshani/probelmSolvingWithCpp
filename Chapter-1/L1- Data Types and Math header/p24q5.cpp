#include<iostream>
using namespace std;
int main(){
  int x1,x2,x3;
  int y1,y2,y3;
  cout<< "Enter the co-ordnate values :"<<endl;
  cout<< "x1 : ";
  cin >> x1;cout<< endl;


  cout<< "Y1 : ";
  cin>> y1;cout<<endl;

  cout<< "x2 : ";
  cin >> x2;cout<< endl;

  cout<< "y2 : ";
  cin >> y2;cout<<endl;
  cout<< "x3 : ";
  cin >> x3;cout<< endl;


  cout<< "y3 : ";
  cin>>y3;cout<<endl;

  double area = .5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  cout<< "Result : "<< area<<endl;
  return 0;
}
