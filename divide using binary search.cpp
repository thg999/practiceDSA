// divide uding binary search 

#include <iostream>
#include<vector>
using namespace std;

int solve(int dividend,int divisor){
    int start = 0;
    int end = abs(dividend);
    int ans = -1;
    
    while(start <= end){
        
        int mid = start + (end - start)/2;
        
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid; // important 
            break;
        }
        
        else if(abs(mid * divisor) < abs(dividend)){
            ans = mid;
            start = mid + 1;
        }
        
        else{
            end = mid - 1;
        }
    }
    
    // assigining the signs based on input values 
    
    
        if( (dividend > 0  && divisor > 0 ) || (dividend < 0 && divisor < 0) )
    {
    return ans;
    }
    
    else{
        return -ans;
    }
}
int main() {
    cout<<"Welcome to Divide Checker : "<<endl;
    int dividend;
    cout<<"Enter the dividend : "<<endl;
    cin>>dividend;
    
    
    int divisor;
    cout<<"Enter the divisor "<<endl;
    cin>>divisor;
    
    int ans1 = solve(dividend,divisor);
    
    cout<<"The quotient is : "<<ans1;
    // Write C++ code here
    //  std::cout << "Hello world!";

    return 0;
}
