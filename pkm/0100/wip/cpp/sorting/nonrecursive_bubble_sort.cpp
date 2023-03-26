#include<iostream>
#include<vector>
using namespace std;

vector<int> bubble_sort(vector<int> a){
    // fill your code here
    int size = a.size();
    int temp;
    int swapping_flag = 1;
    
    for(int i=0; i<size - 1; i++){
        if(swapping_flag == 0){
            //cout << "Here we stop" << endl;
            break;
        }
        else{
            //cout << "Working !!" << endl;
            swapping_flag = 0;
            for(int j=0; j<size-i-1; j++){
                if(a[j] > a[j+1]){
                    swap(a[j],a[j+1]);
                    swapping_flag = 1;
                }
            }
        }
    }
    return a;
}

int main(){
    vector<int> a = {1,2,10,4,55,3,4,5};
    vector<int> sorted_a = bubble_sort(a);
    for(int number : sorted_a){
        cout << number << endl;
    }
    return 0;
}