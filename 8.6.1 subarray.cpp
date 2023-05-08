#include<iostream>
using namespace std;
int main(){

    int n;
    cin>> n;
    int array[n];
    //We just input all the variable 
    for(int i=0;i<n;i++){
        cin>> array[i];
    }
    
    //Now we try to make output 
    // imagin we have array {1,2,3}
    // we fix as 1
    //1 2
    //1 2 3 
    // 2 
    //2 3
    //3

    //so let's start 
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<< array[k];
            }
        cout<< endl;
        }
    }
    

    return 0;
}