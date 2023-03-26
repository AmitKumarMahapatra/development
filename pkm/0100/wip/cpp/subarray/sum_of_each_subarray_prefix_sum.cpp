#include<iostream>
using namespace std;

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int size = 9;

    int max_sum = 0;
    int sum = 0;
    
    int prefix_sum[size];
    prefix_sum[0] = arr[0];
    for(int i=1; i<size; i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            sum = 0;
            if(i==j){
                sum = prefix_sum[j];    
            }
            else{
                sum = prefix_sum[j] - prefix_sum[i-1];
            }
            max_sum = max(sum,max_sum);
        }
    }
    cout << max_sum;
    
    return 0;
}