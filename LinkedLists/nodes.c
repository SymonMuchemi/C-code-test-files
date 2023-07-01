 #include <stdio.h>
 #include <stdlib.h>

 struct node
 {
    int data;
    struct node *link;
 };

int main(void)
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    /*Head pointer is pointing to the first node*/
    head->data = 45;
    head->link = NULL;

    /* Creating a second node called current*/
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    /*Linking the first node to the second node*/
    head->link = current;
    
    /*Creating another node*/
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    /*Linking the second node to the third node*/
    head->link->link = current;

    int data_on_node3;
    data_on_node3 = head->link->link->data;

    printf("Node 3 holds the value: %d", data_on_node3);
    
    return (0);
}
 
