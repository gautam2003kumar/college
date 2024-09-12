#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int val){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = val;
    newNode->next = NULL;

    return newNode;
}

struct Node* insertAtBeg(struct Node* head, int val){
    struct Node* anir = createNode(val);

    anir->next = head;
    return anir;
}

void printLL(struct Node* head){
    struct Node* temp = head;

    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void solve(){
    
    struct Node* head = createNode(45);

    for(int i=5; i>=1; i--){
        head = insertAtBeg(head, i*3);
    }

    printLL(head);
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt", "w", stdout);

    solve();

    return 0;
}