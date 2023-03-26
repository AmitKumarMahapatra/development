#include<iostream>
#include<vector>
using namespace std;

vector<int> insertion_sort(vector<int> a){
    int size = a.size();
    int key,i;
    
    for(int j=1; j<size; j++){
        key = a[j];
        i = j-1;
        while(i>=0 && key < a[i]){
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
    return a;
}

int main(){
    vector<int> a = {1,2,10,4,55,3,4,5};
    vector<int> sorted_a = insertion_sort(a);
    for(int number : sorted_a){
        cout << number << endl;
    }
    return 0;
}