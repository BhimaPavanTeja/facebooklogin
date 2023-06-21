#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* link;
};

void insert_s();
void insert_e();
void insert_y();
void delete_s();
void delete_e();
void search();
void display();

struct node* head = NULL;

int main() {
    int ch;
    while(1) {
        printf("*******************main menu************************\n");
        printf("1 insert the element at beginning\n");
        printf("2 insert the element at end\n");
        printf("3 insert the element at position you want\n");
        printf("4 delete the element at beginning\n");
        printf("5 delete the element at end\n");
        printf("6 search the element\n");
        printf("7 display the element\n");
        printf("8 exit\n");  //changed
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                insert_s();
                break;
            case 2:
                insert_e();
                break;
            case 3:
                insert_y();
                break;
            case 4:
                delete_s();
                break;
            case 5:
                delete_e();
                break;
            case 6:
                search();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
            default:
                printf("Enter a valid choice\n");
                break;
        }
    }
}

void insert_s() {
    int item;
    struct node* ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter the element to insert: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->link = head;
    head = ptr;
    printf("Node inserted successfully\n");
}

void insert_e() {
    int item;
    struct node* ptr;
    struct node* temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter the element to insert: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->link = NULL;
    if (head == NULL) {
        head = ptr;
    } else {
        temp = head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = ptr;
    }
    printf("Node inserted successfully\n");
}

void insert_y() {
    int item, pos, count = 1;
    struct node* ptr;
    struct node* temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &item);
    ptr->data = item;
    temp = head;
    while (temp != NULL && count < pos - 1) {
        temp = temp->link;
        count++;
    }
    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }
    ptr->link = temp->link;
    temp->link = ptr;
    printf("Node inserted successfully\n");
}

void delete_s() {
    struct node* temp;
    if (head == NULL) {
        printf("No element to delete\n");
        return;
    }
        temp = head;
    head = head->link; //changed
    printf("%d is deleted\n", temp->data);
    free(temp);
    printf("Node deleted successfully\n");
}

void delete_e() {
    struct node* temp;
    struct node* prev;
    if (head == NULL) {
        printf("No element to delete\n");
        return;
    }
    temp = head;
    prev = NULL;
    while (temp->link != NULL) {  //changed
        prev = temp;
        temp = temp->link;
    }
    if (prev != NULL) {
        prev->link = NULL;
    } else {
        head = NULL;
    }
    printf("%d is deleted\n", temp->data);
    free(temp);
    printf("Node deleted successfully\n");
}

void search() {
    int item, count = 1;  //changed
    struct node* temp;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Enter the element to search: ");
    scanf("%d", &item);
    temp = head;
    while (temp != NULL) {
        if (temp->data == item) {
            printf("%d found at position %d\n", item, count);
            return;
        }
        temp = temp->link;
        count++;
    }
    printf("%d not found in the list\n", item);
}

void display() {  //changed
    struct node* temp;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = head;
    printf("Elements in the list:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}