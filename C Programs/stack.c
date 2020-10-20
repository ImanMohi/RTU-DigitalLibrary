#include <stdio.h>
#include <stdlib.h>
//Global Variable
int size,choice,ele;


//Creating Stack
struct stack{
    int arr[100];
    int top;

}st;

//Inserting Element
void push(int element)
{
    if((st.top)==size-1)
    {
        printf("\n Stack is Full");
    }
    else
    {
        st.top++;
        printf("\nEnter a Value ");
        scanf("%s",&ele);
        st.arr[st.top]=ele;
    }
}

//Removing Element
int pop()
{
    if((st.top)==-1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        int out;
        out=st.arr[st.top];
        st.top--;
        return out;
    }
}

//Peek
int peek()
{
    int display;
    display=st.arr[st.rear];
    return display;
}

//Display Stack
void display()
{
    if((st.top)>=0)
    {
        printf("\n\nElements in the Stack");
        for(i=st.top;i>=0;i--)
        {
            printf("\n%d",st.arr[i]);
        }
    }
    else
    {
        printf("No elements to Display");
    }
}

int main()
{
    st.top=-1;
    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&size);
    printf("\nStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");

    do{
        printf("\nEnter Your Choice  ");
        scanf("%c",&choice);
        switch(choice)
        {
        case 1:
            {
                push(ele);break;
            }
        case 2:
            {
                printf("%d",pop());
            }
        case 3:
            {
                printf("%d",peek());
            }
        case 4:
            {
                display();break;
            }
        case 5:
            {
                printf("\n\t EXIT Point");break;
            }
        default:
            printf("\nEnter a correct choice (1,2,3,4,5)");
        }
    }while(choice=5);
    return 0;
}