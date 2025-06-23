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


// deletion 
node * deleteNode(node * root, int value)
{
    if(root == NULL)
     return root;
    
     if(root -> data < value)
        root -> right = deleteNode(root -> right, value)
    else if(root -> data > value)
        root -> left = deleteNode(root -> left, value);
    else
    {
        // node with one child or no child
        if(root -> left == NULL)
        {
            node * temp = root -> right;
            delete root;
            return temp;
        }
        else if(root -> right == NULL)
        {
            node * temp = root -> left;
            delete root;
            return temp;
        }
        
        // node with two children: get the inorder successor (smallest in the right subtree)
        node * temp = minValueNode(root -> right);
        
        // copy the inorder successor's content to this node
        root -> data = temp -> data;
        
        // delete the inorder successor
        root -> right = deleteNode(root -> right, temp -> data);
    }
}