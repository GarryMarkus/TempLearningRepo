#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to calculate the height of the tree
int height(struct Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        return max(height(node->left), height(node->right)) + 1;
    }
}

// Function to insert a new node into the tree
void insert(struct Node** root, int data) {
    if (*root == NULL) {
        *root = createNode(data);
    } else if ((*root)->left == NULL) {
        (*root)->left = createNode(data);
    } else if ((*root)->right == NULL) {
        (*root)->right = createNode(data);
    }
}

// Function for inorder traversal
void inorder(struct Node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to calculate the height of the tree
int height(struct Node* node) {
    if (node == NULL) {
        return 0;
    } else {
        return max(height(node->left), height(node->right)) + 1;
    }
}

// Function to insert a new node into the tree
void insert(struct Node** root, int data) {
    if (*root == NULL) {
        *root = createNode(data);
    } else {
        if (data < (*root)->data) {
            if ((*root)->left == NULL) {
                (*root)->left = createNode(data);
            } else {
                insert(&((*root)->left), data);
            }
        } else {
            if ((*root)->right == NULL) {
                (*root)->right = createNode(data);
            } else {
                insert(&((*root)->right), data);
            }
        }
    }
}

// Function for inorder traversal
void inorder(struct Node* root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function for preorder traversal
void preorder(struct Node* root) {
    if (root) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Function for postorder traversal
void postorder(struct Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

//Function to count total number of node of the tree
int countNodes(struct Node* root) {
    if (root == NULL){
        return 0;
    }
    else{
    return (1 + countNodes(root->left) + countNodes(root->right));
    }
}

// Function to search for a node in the tree
int search(struct Node* root, int data) {
    if (root == NULL) {
        return 0;
    } else if (root->data == data) {
        return 1;
    } else if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

// Function to delete a node from the tree
void deleteNode(struct Node** root, int data) {
    if (*root == NULL) {
        return;
    } else if (data < (*root)->data) {
        deleteNode(&((*root)->left), data);
    } else if (data > (*root)->data) {
        deleteNode(&((*root)->right), data);
    } else {
        if ((*root)->left == NULL && (*root)->right == NULL) {
            free(*root);
            *root = NULL;
        } else if ((*root)->left == NULL) {
            struct Node* temp = *root;
            *root = (*root)->right;
            free(temp);
        } else if ((*root)->right == NULL) {
            struct Node* temp = *root;
            *root = (*root)->left;
            free(temp);
        } else {
            struct Node* temp = (*root)->right;
            while (temp->left != NULL) {
                temp = temp->left;
            }
            (*root)->data = temp->data;
            deleteNode(&((*root)->right), temp->data);
        }
    }
}

int main() {
    struct Node* root = NULL;
    int n, data;
    printf("Enter number of nodes to enter: ");
    }
}

// Function for preorder traversal
void preorder(struct Node* root) {
    if (root) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Function for postorder traversal
void postorder(struct Node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

//Function to count total number of node of the tree
int countNodes(struct Node* root) {
    if (root == NULL){
        return 0;
    }
    else{
    return (1 + countNodes(root->left) + countNodes(root->right));
    }
}


int main() {
    struct Node* root = NULL;
    int n, data;
    printf("Enter number of nodes to enter: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data); 
        insert(&root, data);
    }

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    printf("Height of the Tree: ");
    printf("%d\n", height(root));

    printf("Total Number of Nodes: ");
    printf("%d\n", countNodes(root));

    return 0;
}