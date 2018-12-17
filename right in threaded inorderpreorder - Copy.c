#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node* left, * right;
    int isThreaded;
};
 
/* Helper function that allocates a
new node */
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 
// Function to insert nodes in level order
struct Node* insertLevelOrder(int arr[], struct Node* root,int i, int n)
{
    // Base case for recursion
    if (i < n)
    {
        struct Node* temp = newNode(arr[i]);
        root = temp;
 
        // insert left child
        root->left = insertLevelOrder(arr,root->left, 2 * i + 1, n);
 
        // insert right child
        root->right = insertLevelOrder(arr,root->right, 2 * i + 2, n);
    }
    return root;
}

 

// Converts tree with given root to threaded
// binary tree.
struct Node *createThreaded(struct Node *root)
{
    // Base cases : Tree is empty or has single
    //              node
    if (root == NULL)
        return NULL;
    if (root->left == NULL &&
        root->right == NULL)
        return root;
 
    // Find predecessor if it exists
    if (root->left != NULL)
    {
        // Find predecessor of root (Rightmost
        // child in left subtree)
        struct Node* l = createThreaded(root->left);
 
        // Link a thread from predecessor to
        // root.
        l->right = root;
        l->isThreaded = 1;
    }
 
    // If current node is rightmost child
    if (root->right == NULL)
        return root;
 
    // Recur for right subtree.
    return createThreaded(root->right);
}

void preorder(struct Node *root)
{
	if(root)
	{
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
 
// A utility function to find leftmost node
// in a binary tree rooted with 'root'.
// This function is used in inOrder()
struct Node *leftMost(struct Node *root)
{
    while (root != NULL && root->left != NULL)
        root = root->left;
    return root; 
}
 
// Function to do inorder traversal of a threadded
// binary tree
void inOrder(struct Node *root)
{
    if (root == NULL) return;
 
    // Find the leftmost node in Binary Tree
    struct Node *cur = leftMost(root);
 
    while (cur != NULL)
    {
        printf("%d ", cur->data);
 
        // If this Node is a thread Node, then go to
        // inorder successor
        if (cur->isThreaded==1)
            cur = cur->right;
 
        else // Else go to the leftmost child in right subtree
            cur = leftMost(cur->right);
    }
}
 
int main()
{
    int arr[] = {2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Node* root = insertLevelOrder(arr, root, 0, n);
    struct Node* root1 = insertLevelOrder(arr, root, 0, n);
    root=createThreaded(root);
 
    printf("Inorder traversal of created threaded binary tree ");
    inOrder(root);
    printf("\nThe preorder traversal of created threaded tree ");
    preorder(root1);
    return 0;
    
}
