#include "tree.h"
#include <stdlib.h>


void create_tree(tree *pt)
{
    (*pt)=NULL;
}

int tree_empty(tree *pt)
{
    return (!*pt);
}

int tree_full(tree *pt)
{
    return 0;
}

void inorder_traverse(tree *pt,void (*pvisit)(tree_entry))
{
    if(*pt)
    {
       inorder_traverse(&(*pt)->left,pvisit);
       (*pvisit)(((*pt)->entry));
       inorder_traverse(&(*pt)->right,pvisit);
    }

}

void preorder_traverse(tree *pt,void (*pvisit)(tree_entry))
{
    if(*pt)
    {
        (*pvisit)(((*pt)->entry));
        preorder_traverse(&(*pt)->left,pvisit);
        preorder_traverse(&(*pt)->right,pvisit);
    }
}

void postorder_traverse(tree *pt,void (*pvisit)(tree_entry))
{
    postorder_traverse(&(*pt)->left,pvisit);
    postorder_traverse(&(*pt)->right,pvisit);
    (*pvisit)(((*pt)->entry));
}

void clear_tree(tree *pt)
{
    if(*pt)
    {
        clear_tree(&(*pt)->left);
        clear_tree(&(*pt)->right);
        free(*pt);
        *pt=NULL;
    }
}

int tree_size(tree *pt)
{
    if(!*pt)
        return 0;
    return (1+tree_size(&(*pt)->left)+size(&(*pt)->right));
}

int tree_depth(tree *pt)
{
    if(!*pt)
        return 0;
    int a=tree_depth(&(*pt)->left);
    int b=tree_depth(&(*pt)->right);
    if(a>b)
        return (1+a);
    else
        return (1+b);
}

void insert_tree(tree *pt,tree_entry e)
{
    if(!*pt)
    {
        *pt=(tree )malloc(sizeof(TreeNode));
        (*pt)->entry=e;
        (*pt)->left=NULL;
        (*pt)->right=NULL;
    }
    else if((*pt)->entry > e)
    {
        insert_tree(&(*pt)->right,e);
    }
    else
    {
        insert_tree(&(*pt)->left,e);
    }

}
