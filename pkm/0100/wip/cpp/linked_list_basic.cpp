#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node a,b,c,d;
    struct Node* start = &a;
    struct Node* iter;
    
    a.data = 10;
    a.next = &b;
    
    b.data = 20;
    b.next = &c;
    
    c.data = 30;
    c.next = &d;
    
    d.data = 40;
    d.next = NULL;
    
    
    iter = start;
    while(iter != NULL){
        std::cout << iter->data << std::endl;
        iter = iter->next;
    }
    
    return(0);
}