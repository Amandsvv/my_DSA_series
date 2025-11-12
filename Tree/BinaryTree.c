#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode() {
    int data;
    printf("Enter node data (-1 for no node): ");
    scanf("%d", &data);
    if (data == -1) {
        return NULL;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    printf("Creating left child of %d\n", data);
    newNode->left = createNode();
    printf("Creating right child of %d\n", data);
    newNode->right = createNode();
    return newNode;
}

void printNode(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    printNode(root->left);
    printNode(root->right);
}

int main() {
    struct Node* root = createNode();
    printf("Pre-order Traversal of the Binary Tree:\n");
    printNode(root);
    printf("\n");
    return 0;
}