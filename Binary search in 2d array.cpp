//  Binary search in 2d array 


#include <iostream>
#include<vector>
using namespace std;


int binarySearchin2DArray(int arr[][3],int row,int col, int target){
    
    int start = 0;
    int end = row*col-1;
    int ans = -1;
    
    while(start <= end){
        
        int mid = start + (end - start)/2;
        int rowIndex = mid/col;
        int colIndex = mid%col;
        
        if(arr[rowIndex][colIndex] ==  target){
            return mid;
        }
        
        else if(arr[rowIndex][colIndex] < target){
            start = mid + 1;
        }
        
        else{
            end = mid - 1;
        }
    }
    return -1;
    
}
int main() {
    
    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int ans = binarySearchin2DArray(arr,3,3,6);
    cout<<ans;
    // Write C++ code here
    // std::cout << "Hello world!";

    return 0;
}
