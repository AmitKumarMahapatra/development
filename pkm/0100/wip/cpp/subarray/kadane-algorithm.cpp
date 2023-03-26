#include<iostream>
using namespace std;

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int size = 9;
    int current_sum = 0;
    int max_sum = 0;
    
    //Kadane's Algorithm    
    for(int i=0; i<size;i++){
        if(current_sum + arr[i] < 0){
            current_sum = 0;
        }
        else{
            current_sum += arr[i];
            max_sum = max(max_sum,current_sum);
        }
    }
    
    cout << max_sum;
    return 0;
}