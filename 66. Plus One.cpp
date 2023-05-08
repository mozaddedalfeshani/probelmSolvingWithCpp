// Attention First code will pass 86 test case 
// it will fail when it's test case goes out of range 
//so please follow the part 2 code 
// part 1 for best understanding with basic 


///Part 2:
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int index = digits.size()-1;

    while(index>=0){
        if(digits[index]<9){
           digits[index]++; 
        
            break;
        }
        else if(digits[index]==9){
            digits[index]= 0;
            index--;
        }
        if(index==-1){
            digits.insert(digits.begin(), 1);
            break;
        }
        
        
    }
    return digits;
        

    }
};



//part 1:



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long int sum =0;
        if(digits[digits.size()-1]!=9){
            int a=  digits[digits.size()-1]++;
            a++;
            digits[digits.size()-1]=a;
            return digits;
        }
        else{

        for(int i=0;i<digits.size();i++){
            sum = sum*10 + digits[i];
            
        }
            sum++;
        
        digits.clear();
        for(int i=(log10(sum ));i>0;i--){
           
            digits.insert(digits.begin(), sum %10);
            sum /=10;
        
        }
        digits.insert(digits.begin(), sum);
        return digits;
        }
    }
};



