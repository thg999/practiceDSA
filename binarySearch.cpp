// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    
    int start = 0;
    int end = size-1;
    
    while(start <= end){
        int mid = (start+end)/2;
        
        if(arr[mid] == key){
            return mid; // returning
        }
        
        else if(arr[mid] < key){
            start = mid+1;
        }
        
        else{
            end = mid -1;
        }
    }
    
    return -1; // matlab nhi mileya key 
    
}
int main() {
    int arr[] = {2,4,6,8,10,12,16};
    int targetIndex  = binarySearch(arr,7,13);
    
    if(targetIndex == -1){
        cout<<"Key Not Found";
    }
    
    else{
        cout<<"Key Found At "<<targetIndex<<" Index";
    }
    // Write C++ code here
  //  std::cout << "Hello world!";

    return 0;
}
