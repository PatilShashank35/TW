#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value){
        this->data = value;
        this->next = nullptr;
    }
};

class Solution{
public:
    bool hasCycle(Node* head){
        Node* fast = head;
        Node* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};


int main() {
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second;
    
    Solution sol;
    if(sol.hasCycle(head)){
        cout<<"Cycle detected!!"<<endl;
    }
    else{
        cout<<"Cycle not detected!!"<<endl;
    }
    
    return 0;
    
}