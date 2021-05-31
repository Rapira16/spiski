#include <stdio.h>

typedef struct Node {
    int dat;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    int size;
} List;

void init(List *lst) {
    lst->head = NULL;
    lst->size = 0;
}
void ins(List *lst, int data) {
    Node *new = (Node*) malloc(sizeof(Node));
    new->dat = data;
    new->next = NULL;

    Node *current = lst->head;
    if (current == NULL) {
        lst->head = new;
        lst->size++;
    } else {
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new;
        lst->size++;
    }
}
void printNode(Node *n) {
    if (n == NULL) {
        printf("[]");
        return;
    }
    printf("%d", n->dat);
}

void printList(List *lst) {
    Node *current = lst->head;
    if (current == NULL) {
        printNode(current);
    } else {
        do {
            printNode(current);
            current = current->next;
        } while (current != NULL);
    }
    printf(" Size: %d \n", lst->size);
}
int main (const int argc, const char **argv) {
    List *lst = (List*) malloc(sizeof(List));
    init(lst);
    printList(lst);
    printList(lst); // 1 задание
    for(int i = 0; i <= size; i++){
        arr[i]=lst;
    }
    while(i<=size) {
        if(arr[i]>arr[i++]){
            break;
        }
    }
    return 0;
}