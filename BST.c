#include <stdio.h>
#include<stdlib.h>

struct tree
{
    int info;
    struct tree *left;
    struct tree *right;
};

struct tree *root=NULL;

void insertbst()
{
    int x;
    struct tree *curr,*prev=NULL,*p;
    printf("Enter element to be inserted in BST:\t");
    scanf("%d",&x);
    p=(struct tree *)malloc(sizeof(struct tree));
    p->info=x;
    p->right=NULL;
    p->left=NULL;
    if(root==NULL)
    {
        root=p;
    }
    else
    {
        curr=root;
        while(curr!=NULL)
        {
            prev=curr;
            if(x<curr->info)
                curr=curr->left;
            else
                curr=curr->right;
        }
        if(x<prev->info)
            prev->left=p;
        else
            prev->right=p;
    }
}

void createbst()
{
    int size;
    printf("Enter number of elements to be inserted in BST:\t");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        insertbst();
    }
}


void inorder(struct tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->info);
        inorder(root->right);
    }
}

int main()
{
    createbst();
    inorder(root);
    

}