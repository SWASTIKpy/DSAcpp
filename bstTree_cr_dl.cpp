// creation and deletion of bst tree 

// creation 
node * insert(node * root, int value)
{
    if ( root == NULL)
    return new node (value);
    
    if (root -> data < value )
        root -> right = new node (value);
    if(root -> data >= value)
        root -> left = new node (value) ;
}