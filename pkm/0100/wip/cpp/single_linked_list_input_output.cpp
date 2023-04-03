#include<iostream>
using namespace std;

/*
class Node{
    int data;
    Node* next;
};
*/
struct Node{
    int data;
    struct Node* next;
};

int main(){

    int n;
    cout << "Enter howmany elements do you want to enter" << endl;
    cin >> n;
    
    Node* start = NULL;
    Node* iter = NULL;

    Node* temp = (Node*) malloc(sizeof(Node));
    
    cout << "Enter the data of Node no 1" << endl;
    cin >> temp->data;
    temp->next = NULL;
    
    start = temp;
    iter = start;    
    
    
    for(int i=0; i<n-1; i++){
        Node* temp = (Node*) malloc(sizeof(Node));
        cout << "Enter the data of Node no " << i+2 << endl;
        cin >> temp->data;
        temp->next = NULL;
        iter->next = temp;
        iter = temp;
    }
    
    iter = start;
    
    for(int i=0;i<n;i++){
        cout << iter->data << "->";
        iter = iter->next;
    }
    
    return(0);
}