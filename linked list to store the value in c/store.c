#include <stdio.h>
#include <stdlib.h>

struct Node{
    int Data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail;
struct Node *newnode;

void toprint(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)    // corner case temp->next
    { 
        if (temp->next == NULL)
        {
            printf("%d", temp->Data);
            break;
        }
        printf("%d -> ", temp->Data);
        temp = temp->next;
    }
}

void topushback(int value)
{
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        head = tail = newnode;
        head->Data = value;
        head->next = NULL;
    }
    else
    {
        newnode->Data = value;
        newnode->next = NULL;
        tail->next = newnode;
        tail = newnode;
    }
}

void topushfront(int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    if(head== NULL){
        head = tail = newnode;
        head->Data = value;
        head->next = NULL;  // tail->next = null both are same
    }
    else{
        newnode->Data = value;
        newnode->next = head;
        head = newnode;

    }
}

void linersearch(int key){

    struct Node *temp = head;
    int idx = 1;
    while (temp != NULL){
        if(temp->Data == key){
            printf("%d is the key, present at in %d idx \n",key,idx);
        }
        temp = temp->next;
        idx += 1;
    }
}

int main()
{
    topushback(11);
    topushback(12);
    topushback(13);
    topushback(14);
    topushback(15);
    topushback(16);
    topushback(17);
    topushback(18);
    topushback(19);
    topushback(20);

    topushfront(10);
    topushfront(9);
    topushfront(8);
    topushfront(7);
    topushfront(6);
    topushfront(5);
    topushfront(4);
    topushfront(3);
    topushfront(2);
    topushfront(1);

    linersearch(11);
 
    toprint(head);

    /* to print check 
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            printf("%d", temp->Data);
            break;
        }
        printf("%d -> ", temp->Data);
        temp = temp->next;
    } */

    return 0;
}
