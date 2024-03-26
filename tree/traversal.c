#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*root;
root=NULL;


struct node*getnode(int data)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return (node);
};






struct node*insert(struct node*root,int data)
{
    if(root==NULL)
    root=getnode(data);
    else if (data<root->data)
    root->left=insert(root->left,data);
    else (root->right)=insert(root->right,data);
    return root;
}

struct node*delete(struct node*root,int data)
{
    struct node*temp;
    if (root==NULL)
    return root;

    else if(data<root->data)
    root->left=delete(root->left,data);

    else if(data>root->data)
    root->right=delete(root->right,data);

    else if(root->left==NULL && root-> right==NULL)
        {
            free(root);
            root=NULL;
            return (node);
        }
    
    struct node*newnode=minValue(root->right);
    root->data=root->data;
    root->right=delete(root->right,newnode->data);
}
return root;
}

else {
if(root>left==NULL)
{
    temp=root;
    root=root->right;
    free(temp);
}
else if(root->right==NULL)
{
    temp=root;
    root=root;



void intrav(struct node*root)
{
    if (root==NULL)
    return;
    else{
        intrav(root->left);
        printf("%d",root->data);
        intrav(root->right);
    }
    return;
}

void postrav(struct node*root)
{
    if(root==NULL)
    return;
    else{
        postrav(root->left);
        printf("%d",root->data);
        postrav(root->right);
    }
    return;
}


void pretrav(struct node*root)
{
    if (root==NULL)
    return;
    else
    {
        printf("%d",root->data);
        pretrav(root->left);
        pretrav(root->right);
    }
} 
int main()
{
    int i;
    int array[7]={27,14,35,10,19,31,42};

    for (i=0;i<7;i++)
    insert(array[i]);

    i=31;
    struct node*root=search(i);
    
    if(root!=NULL)
    {
        printf("[%d] Element found.",root->data);
        printf("\n");
    }
    else
    { 
        printf("[x] Element not found (%d).\n",i);
    }
    i=15;
    root=search(i);
    if(root !=NULL)
    {
        printf("[x] Element found.",root->data);
        printf("\n");
    }
    else
    {
        printf("[x] Element not found (%d).\n",i);
    }

    printf("\nPreorder traversal:");
    pretrav(root);

    printf("\nInorder traversal: ");
    Intrav(root);

    printf("\n Post order traversal:");
    postrav(root);

    return 0;

}