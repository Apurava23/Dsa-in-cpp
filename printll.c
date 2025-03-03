#include <stdio.h>
#include <stdlib.h>

struct Node{
    int Data;
    struct Node *next;
};

void toprint(struct Node* head){
    struct Node *temp = head;
    while (temp->next != NULL){ 
        if(temp->next->next == NULL){
        printf("%d", temp->Data);
        break;
        }
        printf("%d -> ", temp->Data);
        temp = temp->next;
    }
}

int main()
{
    struct Node *head = NULL;
    struct Node *temp1;
    struct Node *temp2;

    int lower, upper;
    printf("Enter the value of lower\n");
    scanf("%d", &lower);
    printf("Enter the value of upper\n");
    scanf("%d", &upper);

    int fhr = lower;

    while (fhr <= upper){
        if (head == NULL){
            head = (struct Node *)malloc(sizeof(struct Node));
            temp1 = head;
            head->Data = fhr;
            head->next = NULL;
        }
        else{
            fhr += 20;
            temp2 = (struct Node *)malloc(sizeof(struct Node));
            temp2->Data = fhr;
            temp2->next = NULL;
            temp1->next = temp2;
            temp1 = temp2;
        }
    }

    toprint(head);

    /*  struct Node *temp = head;
        while (temp->next != NULL){ 
        if(temp->next->next == NULL){
        printf("%d", temp->Data);
        break;
        }
        printf("%d -> ", temp->Data);
        temp = temp->next;
    } */

    return 0;
}
