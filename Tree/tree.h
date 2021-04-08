#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef int tree_entry;

typedef struct treenode
{
    tree_entry entry;
    struct treenode *left;
    struct treenode *right;
}TreeNode;

typedef TreeNode *tree;

void create_tree(tree *pt);

int tree_empty(tree *pt);

int tree_full(tree *pt);

void inorder_traverse(tree *pt,void (*pvisit)(tree_entry));

void preorder_traverse(tree *pt,void (*pvisit)(tree_entry));

void postorder_traverse(tree *pt,void (*pvisit)(tree_entry));

void clear_tree(tree *pt);

int tree_size(tree *pt);

int tree_depth(tree *pt);

void insert_tree(tree *pt,tree_entry e);

#endif // TREE_H_INCLUDED
