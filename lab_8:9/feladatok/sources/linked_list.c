//
// Created by Sára Kis on 24.04.2023.
//

#include "../headers/linked_list.h"

Node *newNode(int new_data) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (!new_node) {
        printf("error");
        exit(-1);
    }
// insert the data
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

bool isEmpty(Node *head) {
    return head == NULL;
}

void insertAtBeginning(Node** head_ref, int
new_data) {
// Allocate memory to a node
    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
// Move head to new node
    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int
new_data) {
    if (prev_node == NULL) {
        printf("error");
        return;
    }
    Node* new_node = newNode(new_data);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    Node* last = *head_ref;
    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}

void deleteFromBeginning(Node **head_ref) {
    if(isEmpty(*head_ref)) {
        printf("error");
        return;
    }
    Node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}

void deleteFromEnd(Node **head_ref) {
    if(isEmpty(*head_ref)) {
        printf("error");
        return;
    }
    Node* last = *head_ref, *prev;
    while (last->next != NULL)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    free(last);
}

void destroy(Node *head)
{
    Node *temp;
    while(head!=NULL);
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}
