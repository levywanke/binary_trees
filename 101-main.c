#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - ouput a num
 *
 * @n: printed n
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - gateway
 *
 * Return: pass
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    binary_tree_levelorder(root, &print_num);
    binary_tree_delete(root);
    return (0);
}
