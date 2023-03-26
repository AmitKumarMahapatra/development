#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            //cout << "(" << arr[i] << "," << arr[j] << ")";
            for(int k = i; k<=j; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}

/*
T(n) = ?
*/