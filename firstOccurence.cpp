// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int firstOccurence(vector<int> arr, int key){
    int start =0;
    int end= arr.size()-1;
    int ans = -1;
    
    while(start <= end){
        
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
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
    
    int last1 = firstOccurence(arr,5);
    cout<<"The first occurence is at "<<last1<<" index";
    
    cout<<endl;
    
    auto last2 = lower_bound(arr.begin(),arr.end(),5);
    cout<<"The first occurence is at "<<last2 - arr.begin()<<" index";
    // Write C++ code here
    //std::cout << "Hello world!";

    return 0;
}
