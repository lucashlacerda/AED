#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

void insert(Node **head, Node **tail, Node *node){
    if(*head == NULL){
        *head = node;
        *tail = node;
    }else{
        (*tail)->next = node;
        *tail = node;
    }
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    Node *node = new Node();
    node->data = 1;
    node->next = NULL;
    insert(&head, &tail, node);
    return 0;
}