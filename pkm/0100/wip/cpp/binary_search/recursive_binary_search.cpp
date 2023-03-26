#include<iostream>
using namespace std;

int binary_search(int* a, int start, int end, int key){
    if(start==end){
        if(a[start] == key){
            return start;
        }
        else{
            return -1;
        }
    }
    else if(end < start){
        return -1;
    }
    else{
        int mid = (start + end)/2;
        if(a[mid] == key){
            return(mid);
        }
        else{
            if(a[mid] > key){
                return binary_search(a,start,mid-1,key);
            }
            else{
                return binary_search(a,mid+1,end,key);
            }
        }
    }
}


int main(){
    int arr[] = {10,20,30,40,50};
    int key = 70;
    
    int index = binary_search(arr,0,4,key);
    
    if(index==-1){
        
        cout << "The element is not present in the array";
    }
    else{
        cout<<"The element is present in index " << index;
    }
    
    return 0;
}