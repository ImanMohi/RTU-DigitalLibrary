
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void main()
{

    struct node *start = NULL, *last, *t1, *t;
    int ch, n, i, flag = 0, pos;
    do
    {
        printf("Enter 1 for creation\nEnter 2 for insertion\nEnter 3 for deletion\nEnter 4 for display\n");
        printf("Enter your choice: ");

        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Kindly enter the number of nodes you want to create : ");
            scanf("%d", &n);
            printf("Kindly enter data\n ");
            for (i = 0; i < n; i++)
            {
                t = (struct node *)malloc(sizeof(struct node));
                scanf("%d", &(t->data));
                if (start == NULL)
                {
                    start = last = t;
                    t->prev = NULL;
                }
                else
                {
                    t->prev = last;
                    t->next = NULL;
                    last->next = t;
                    last = t;
                }
            }
            flag = 1;
            break;
        case 2:
            if (flag == 0)
                printf("Please create a linked list first");
            else
            {
                t = (struct node *)malloc(sizeof(struct node));
                printf("Please enter the data to be inserted:");
                scanf("%d", &(t->data));
                printf("Please enter where you want to insert your node");
                scanf("%d", &pos);
                if (pos == 1)
                {

                    t->next = start;
                    t->prev = NULL;
                    start->prev = t;
                    start = t;
                }
                else
                {
                    t1 = start;

                    for (i = 2; i < pos; i++)
                    {
                        t1 = t1->next;
                    }
                    t->prev = t1;
                    t->next = t1->next;
                    t1->next = t;
                    (t1->next)->prev = t;
                }
            }
            break;
        case 3:
            if (flag == 0)
            {
                printf("Please create the a linked list first");
            }
            else
            {
                printf("Please enter the position from which you want to delete the node");
                scanf("%d", &pos);
                if (pos == 1)
                {
                    (start->next)->prev = NULL;
                    start = start->next;
                }
                else
                {
                    t1 = start;
                    for (i = 2; i < pos; i++)
                    {
                        t1 = t1->next;
                    }
                    ((t1->next)->next)->prev = t1;
                    t1->next = (t1->next)->next;
                }
            }
            break;

        case 4:
            printf("The linked list is :\n");
            for (t = start; t != NULL; t = t->next)
            {

                printf("%d ", t->data);
            }

            break;
        }
    } while (ch);
}