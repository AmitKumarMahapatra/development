#include<iostream>
#include<vector>
using namespace std;

vector<int> selection_sort(vector<int> a){
    int size = a.size();
    int minimum;
    
    for(int i=0; i<size-1; i++){
        minimum = i;
        for(int j=i+1; j<size; j++){
            if(a[minimum] > a[j]){
                minimum = j;
            }
        }
        swap(a[i],a[minimum]);
    }
    
    return a;
}

int main(){
    vector<int> a = {1,2,10,4,55,3,4,5};
    vector<int> sorted_a = selection_sort(a);
    for(int number : sorted_a){
        cout << number << endl;
    }
    return 0;
}