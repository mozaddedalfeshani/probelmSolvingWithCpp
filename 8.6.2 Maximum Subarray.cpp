#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int sum =0,maxSum =INT_MIN;
    if(n==1){
        cout<< "sum : "<<arr[0]<<endl;
    }
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
        
            for(int k=i;k<=j;k++){
                cout<< arr[k]<< " ";
                sum += arr[k];
            }
            cout<<endl;
            if(sum>maxSum){
                maxSum=sum;
                sum =0;
            }
            else{
                sum =0;
            }
        }
    }
    cout<< "We got : "<<maxSum<<endl;
    return 0;
}