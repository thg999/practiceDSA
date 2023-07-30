// total no of occurences 
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
    

    int first1 = firstOccurence(arr,5);
    int last1 = lastOccurence(arr,5);
    
    int totalOccurence = last1 - first1 + 1;
    
    cout<<"The first occurence is at "<<first1<<" index"<<endl;
    cout<<"The last occurence is at "<<last1<<" index"<<endl;

    cout<<"The total no of occurences are  "<<totalOccurence;

    

    // Write C++ code here
    //std::cout << "Hello world!";

    return 0;
}
