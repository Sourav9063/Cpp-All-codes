#include<stdio.h>
#include<conio.h>
#include<stdlib. struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;
node *create()
{
    node *a;
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(x==-1)
    {
        return NULL;
    }
    a=(node*)malloc(sizeof(node));
    a->data=x;
    printf("enter left child %d\n",x);
    a->left=create();
    printf("enter right child %d\n",x);
    a->right=create();
    return a;
}
preorder(node* a)
{
    if(a!=NULL)
    {
        printf("%d ",a->data);
        preorder(a->left);
        preorder(a->right);
    }
}
inorder(node *a)
{
    if(a!=NULL)
    {
        inorder(a->left);
        printf("%d ",a->data);
        inorder(a->right);
    }
}
postorder(node* a)
{
    if(a!=NULL)
    {
        postorder(a->left);
        postorder(a->right);
        printf("%d ",a->data);
    }
}
int main()
{
node *root;
root=create();
printf("Preorder traversal is:");
preorder(root);
printf("\n");
printf("inorder traversal is:");
inorder(root);
printf("\n");
printf("postorder traversal is:");
postorder(root);
}
