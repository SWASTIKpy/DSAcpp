// creation and deletion of bst tree 

// insertion
node * insert(node * root, int value)
{
    if ( root == NULL)
    return new node (value);
    
    if (root -> data < value )
        root -> right = insert(root -> right, value);
    if(root -> data >= value)
        root -> left = insert(root -> left , value);
}