#include<stdio.h> 
#include<stdlib.h> 
struct Node
{
    int data; 
    struct Node *lchild; 
    struct Node *rchild;
};  
struct Node* insert(struct Node *p,int n)//p=NULL,n=90
{ 
    
  if(p==NULL) //NULL==NULL
  {
    struct Node *s; 
    s=(struct Node*)malloc(sizeof(struct Node)); 
    s->data=n; //n=78 
    s->lchild=NULL; 
    s->rchild=NULL; 
    return s; //s=600
  }
  else //p=450
  {
    if(n<p->data)  //90<78 
    {
      p->lchild=insert(p->lchild,n);  
    }
    else if(n>p->data)//90>78 //p=300
    {
        p->rchild=insert(p->rchild,n); 
        //300->rchild=insert(450,90)
        //450->rchild=600
    }
  } 
  return p;
} 
void inorder(struct Node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data); 
      inorder(root->lchild); 
      inorder(root->rchild);
      
       
    }
}
int main()
{
    struct Node *root=NULL;
    root=insert(root,67); //root=300 
    insert(root,78); 
    insert(root,90);
    insert(root,56); 
    insert(root,54);
    insert(root,56); 
    inorder(root);
}

