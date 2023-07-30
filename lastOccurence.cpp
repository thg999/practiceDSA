
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int lastOccurence(vector<int> arr, int key){
    int start =0;
    int end= arr.size()-1;
    int ans = -1;
    
    while(start <= end){
        
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        
        else if(arr[mid] < key){
            start = mid + 1;
        }
        
        else{
            end = mid - 1;
        }
    }
    return ans;
}


int main() {
    
    vector<int> arr{1,3,3,3,3,3,5,5,5,6};
    
    int last1 = lastOccurence(arr,5);
    cout<<"The last occurence is at "<<last1<<" index";
    
    cout<<endl;
    
    auto last2 = upper_bound(arr.begin(),arr.end(),5);
    cout<<"The last occurence is at "<<last2 - arr.begin() - 1<<" index";
    // Write C++ code here
    //std::cout << "Hello world!";

    return 0;
}
