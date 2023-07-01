#include <stdio.h>
#include <stdlib.h>

struct node
 {
    int data;
    struct node *link;
 };

void count_of_node( struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty");

    struct node *ptr = NULL;

    while (ptr)
    {
        count++;
        ptr =ptr->link;
    }
    printf("%d", count);
}

int main(void)
{

    return 0;
}
