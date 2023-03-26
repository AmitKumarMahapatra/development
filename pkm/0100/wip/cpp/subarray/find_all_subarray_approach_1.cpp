#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    for(int length = 1; length <= size ; length++){
        int times = size - length + 1;
        int init = 0;
        while(init < times){
            cout << "(";
            for(int i = init; i<(init + length); i++){
                cout << arr[i] << ",";
            }
            init++;
            cout << ")" << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
T(n) = 1*n + 2*(n-1) + 3*(n-2) + .... + (n-1)*2 + n*1
*/