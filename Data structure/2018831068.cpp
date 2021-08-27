#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* L;
    struct node* R;
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
    printf("enter Left child %d\n",x);
    a->L=create();
    printf("enter Right child %d\n",x);
    a->R=create();
    return a;
}
preorder(node* a)
{
    if(a!=NULL)
    {
        printf("%d ",a->data);
        preorder(a->L);
        preorder(a->R);
    }
}
inorder(node *a)
{
    if(a!=NULL)
    {
        inorder(a->L);
        printf("%d ",a->data);
        inorder(a->R);
    }
}
postorder(node* a)
{
    if(a!=NULL)
    {
        postorder(a->L);
        postorder(a->R);
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

