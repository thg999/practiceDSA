// find the odd occuring element
#include <iostream>
#include <vector>
using namespace std;

int findOdd(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int ans = -1;
    
    while(start <= end){
        
        int mid = start + (end - start)/2;
        
        if(start == end){ // special case
            return start;
        }
        
        
        if(mid % 2 == 0){ // mid is even
        
            if(arr[mid]  == arr[mid + 1]){  // even odd same number combination bann rha
                    start = mid + 2; // we are at left , want to go to right 
            }
            
            else{
                // may be the ans 
                // right side te ha asi 
                // aisi condition likh ki dono satisfy ho jaan
                end = mid;
            }
            
        }
        
        else{  // mid is odd
        
            if(arr[mid] == arr[mid + 1]){ // odd even wala combination bann reha 
                    // we are on the right side, left side te jana hai
                    end = mid - 1;
            }
            
            else{ // odd te jehda mid hai oh agge aale naal same nhi hai (not on right)
                // ans ho nhi skda,needs to be even then for it,
                //left te hai haale,hun right te jaana
                
                start = mid + 1; 
            }
            
        }
        
    }
    return -1;
    
}
int main() {
    // Write C++ code here
    //  std::cout << "Hello world!";

    vector<int> arr{1,1,2,2,7,7,5,5,43,3,3,6,6,100,100};
    //vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    
    int ans1 = findOdd(arr);
    
    cout<<"Index of the number is : "<<ans1<<endl;
    cout<<"Value of that index is : "<<arr[ans1];
    
    
    return 0;
}
