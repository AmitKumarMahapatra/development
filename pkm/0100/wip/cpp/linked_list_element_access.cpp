#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int main(){

    struct Node a;
    struct Node* s;
    
    a.data = 10;
    a.next = NULL;
    
    cout << a.data << endl;
    //cout << a << endl; //we can not write like this
    s = &a;
    //cout << s.data << endl; // we can not write like this either
    cout << (*s).data << endl;
    cout << s->data << endl;
    
    return(0);
}