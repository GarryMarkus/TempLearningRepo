#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* root, int value) {
    if (root == NULL) {
        root = createNode(value);
        return root;
    }

    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else if (value > root->value) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->value);
        inorderTraversal(root->right);
    }
}

int minimunNode(struct Node* root){
    struct Node* current = root;
    while(current->left != NULL){
        current = current->left;
        }
    return current->value;
}

int maximumNode(struct Node* root){
    struct Node* current = root;
    while(current->right != NULL){
        current = current->right;
        }
    return current->value;
}

void preorderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->value);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->value);
    }
}

struct Node* searchNode(struct Node* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }

    if (value < root->value) {
        return searchNode(root->left, value);
    }

    return searchNode(root->right, value);
}

struct Node* deleteNode(struct Node* root, int value) {
    if (root == NULL) {
        return root;
    }

    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->value) {
        root->right = deleteNode(root->right, value);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = root->right;
        while (temp->left != NULL) {
            temp = temp->left;
 
        }
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
        free(temp);
    }

    return root;
}

void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    struct Node* root = NULL;
    
    int n;
    int choice;
    int value;

    while (1) {
        printf("Binary Tree Operations\n");
        printf("1. Insert Node\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search Node\n");
        printf("6. Delete Node\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number value to insert: ");
                scanf("%d", &n);
                for(int i=0; i<n; i++){
                    scanf("%d", &value);
                    root = insertNode(root, value);
                }
                break;
            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder Traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder Traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("Enter the value to search: ");
                scanf("%d", &value);
                struct Node* foundNode = searchNode(root, value);
                if (foundNode != NULL) {
                    printf("Node with value %d found\n", value);
                } else {
                    printf("Node with value %d not found\n", value);
                }
                break;
            case 6:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;
            case 7:
                freeTree(root);
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}