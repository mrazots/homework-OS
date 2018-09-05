#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


void insert_node(Node **node, int data) {
    Node *tmp = (Node*) malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = (*node);
    *node = tmp;
}

void delete_node( Node **head, int n){

    Node* temp = *head, *prev;
    if (temp != NULL && temp->data == n){
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != n){
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;
    prev->next = temp->next;

    free(temp);
}

void print_list(Node *node) {
    while (node) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    insert_node(&head, 0);
    insert_node(&head, 1);
    insert_node(&head, 2);
    insert_node(&head, 3);
    insert_node(&head, 4);


    print_list(head);

    delete_node(&head, 1);
    print_list(head);

    return 0;
}
