#include<iostream>
using namespace std;

int binary_search(int* a, int start, int end, int key){
    
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid] == key){
            return(mid);
        }
        else if(a[mid] > key){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
    return(-1);
}


int main(){
    int arr[] = {10,20,30,40,50};
    int key = 0;
    
    int index = binary_search(arr,0,4,key);
    
    if(index==-1){
        
        cout << "The element is not present in the array";
    }
    else{
        cout<<"The element is present in index " << index;
    }
    
    return 0;
}