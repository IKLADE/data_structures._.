#include <stdio.h>
#include<stdlib.h>
void insert_beg();
void del_beg();
void display();
void insert_end();
void del_end();
void traverse();
void insert_sorted();

struct node
{
    int info;
    struct node* next;
};

struct node* start=NULL;

int main()
{
    while(1)
    {
        int c;
        printf("1.Insert at beginning\n");
        printf("2.Insert at end\n");
        printf("3.Delete at beginning\n");
        printf("4.Delete at end\n");
        printf("5.Display\n");
        printf("6.Traverse\n");
        printf("7.Insert in sorted manner\n");
        printf("8.Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            insert_beg();
            break;
            case 2:
            insert_end();
            break;
            case 3:
            del_beg();
            break;
            case 4:
            del_end();
            case 5:
            display();
            break;
            case 6:
            traverse();
            break;
            case 7:
            insert_sorted();
            break;
            case 8:
            exit(0);
        }
    }



    return 0;
}

void insert_beg()
{
    int x;
    struct node *temp,*p;
    printf("Enter the element:\n");
    scanf("%d",&x);
    p=(struct node*)malloc(sizeof(struct node));
    temp=start;
    if(start==NULL)
    {
        p->info=x;
        p->next=NULL;
        start=p;
    }
    else
    {
        p->info=x;
        p->next=temp;
        start=p;
    }
}

void del_beg()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("empty list\n");
    }
    else
    {
        start=temp->next;
        printf("The deleted element is:\n%d",temp->info);
        free(temp);
    }
    printf("\n");
}

void display()
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Empty list\n");
    }
    else
    {
        printf("The elements are:\n");
        while(temp!=NULL)
        {
            printf("%d \t",temp->info);
            temp=temp->next;
        }
    }
    printf("\n");

}

void insert_end()
{
        struct node *p = (struct node*)malloc(sizeof(struct node));
        struct node *temp;
        int item;
        printf("Enter element to be inserted:\n");
        scanf("%d",&item);
        if(p == NULL)
        {
            printf("Empty List\n");
        }
        else
        {
            p->info = item;
            if(start == NULL)
            {
                p -> next = NULL;
                start = p;
            }
            else
            {
                temp = start;
                while (temp -> next != NULL)
                {
                    temp = temp -> next;
                }
                temp->next = p;
                p->next = NULL;

            }
        }
}

void del_end()
{
    struct node *temp,*follow;

    if(start==NULL)
    {
        printf("empty list\n");
    }
    else if(start->next==NULL)
    {
        temp=start;

        start=NULL;
        printf("Deleted element is:%d\n",temp->info);
        free(temp);
    }
    else
    {
        temp=start;

        while(temp->next!=NULL)
        {
            follow=temp;
            temp=temp->next;

        }
        follow->next=NULL;
        printf("Deleted element is:%d\n",temp->info);
        free(temp);




    }

}

void traverse()
{
    int x;
    int i=1,flag=0;
    struct node* temp=start;
    printf("Enter element to be searched:\n");
    scanf("%d",&x);
    while(temp!=NULL)
    {
        if(temp->info==x)
        {
            printf("Element found at node %d\n",i);
            flag=1;
        }
        temp=temp->next;
        i++;
    }
    if(flag==0)
        printf("Element not found\n");
}

void insert_sorted()
{
    struct node *p,*temp,*follow;
    int item;
    printf("Enter element to be inserted : \n");
    scanf("%d",&item);
    p = (struct node *)malloc(sizeof(struct node));
    p->info = item;
    if(start == NULL)
    {
        p->next = NULL;
        start =p;
    }
    else if(start->info>item)
    {
        p->next = start;
        start = p;
    }
    else if(start->info<item)
    {
        temp = start;
        follow = temp;
        temp = temp->next;

        while(temp->info<item)
        {
            follow = follow->next;
            temp = temp->next;
        }
        follow->next = item;
        p->next=temp;

    }
}
void traverse_min()
{
    int min=99999;
    struct node* temp=start;
    while(temp!=NULL)
    {
        if(temp->info<min)
        min=temp->info;
        temp=temp->next;
    }
    printf("Smallest element %d\n",min);
}