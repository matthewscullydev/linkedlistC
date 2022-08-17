#include<stdio.h>
#include<stdlib.h>

struct node{

    int Age;
    struct node*next;

};


int main()
{

    struct node* head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    struct node* second;
    head->next = second;
    second->Age = 12;
    second->next = NULL;
    
    printlist(head);

    return 0;

}



void printlist(struct node* n){

    while( n != NULL){

        printf("%d", n->Age);
        n = n->next;

    }

}

