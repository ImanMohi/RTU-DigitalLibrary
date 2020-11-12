#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
} *start = NULL;

void create();
void display();
void insertBegin();
void insertEnd();
void insertMid();
int length();
void deleteBegin();
void deleteEnd();
void deleteMid();
int main()
{
    while (1)
    {
        printf("\n1. Create a Linked List \n2. Display the Linked List\n3. Insert At the Beginning\n4. Insert At the End\n5. Insert in the Middle\n6. Delete from the Beginning\n7. Delete from the End\n8. Delete from the mid\n9. Exit\n");
        int a;
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertBegin();
            break;
        case 4:
            insertEnd();
            break;
        case 5: 
            insertMid();
            break;
        case 6: 
            deleteBegin();
            break;
        case 7: 
            deleteEnd();
            break;
        case 8: 
            deleteMid();
            break;        
        case 9:
            exit(0);
            break;
        }
    }
}

void create()
{
    char ch;
    struct node *newnode, *curnode;
    start = NULL;
    do
    {

        newnode = (struct node *)malloc(sizeof(struct node *));
        printf("\nEnter the data ");
        scanf("%d", &newnode->data);
        if (start == NULL)
        {
            curnode = newnode;
            start = newnode;
        }
        else
        {
            curnode->next = newnode;
            curnode = newnode;
        }
        printf("\nDo You want to Enter More ");
        ch = getch();

    } while (ch != 'n');
    curnode->next = NULL;
}

void display()
{
    if (start == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        struct node *temp = start;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void insertBegin()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter the Data ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    start = newnode;
}

void insertEnd()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter the data ");
    scanf("%d", &newnode->data);
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct node *temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    newnode->next = NULL;
}

int length()
{
    int len=0;
    if (start == NULL)
    {
        return 0;
    }
    else
    {
        struct node *temp = start;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
}

void insertMid()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node*));
    int pos;
    printf("\nEnter the position "); 
    scanf("%d",&pos);
    if(pos>length()||pos==0)
    {
        printf("\nInvalid Position");
    }
    else
    {
        
       
            printf("\nEnter the data ");
        scanf("%d",&newnode->data);
        if(start==NULL)
        {
            start = newnode;
        }
        else
        {
            struct node* temp=start;
            int count=0;
            while(count<pos-1)
            {
                temp=temp->next;
                count++;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        
        
    }
    
    
}

void deleteBegin()
{
    if(start==NULL)
    {
        printf("\nInvalid Operation");
    }
    struct node* temp = start;
    start = temp->next;
    free(temp);

}

void deleteEnd()
{
    
    if(start==NULL)
    {
        printf("\nList is Empty");
    }
    else if(start->next == NULL)
    {
        free(start->next);
        start = NULL;
    }
    else
    {
            

        struct node* temp = start;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        
        free(temp->next);
        temp->next = NULL;
    }
    
}

void deleteMid()
{
    int pos;
    printf("\nEnter the position ");
    scanf("%d",&pos);
    if(pos>length()||pos==0)
    {
        printf("\nInvalid Position");
    }
    else if(pos==length())
    {
        deleteEnd();
    }
    else if(pos==1)
    {
        deleteBegin();
    }
    else
    {
        struct node* cur = start;
        struct node* prev = NULL;
        int count = 1;
        while(count!=pos)
        {
            count++;
            prev= cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        free(cur);
    }
    
}


