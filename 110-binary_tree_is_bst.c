#include "binary_trees.h"
/**
 * find_node - Function to find a node in a tree.
 * @root: root of the tree to evaluate.
 * @node: node to find.
 * Return: 1 if exists, 0 if not.
 */

int find_node(binary_tree_t *root, binary_tree_t *node)
{

	if (root == NULL)
		return (0);
	if (node == root)
		return (1);
	if (node->n < root->n)
		return (find_node(root->left, node));
	if (node->n > root->n)
		return (find_node(root->right, node));
	return (0);
}
/**
 * croos_tree - cross tree checking if each node exists correctly
 * @root: root node of tree
 * @node: current node to evaluate
 * Return: 1 if is BST, 0 if not
 */

int croos_tree(binary_tree_t *root, binary_tree_t *node)
{
	if (root && node)
	{
		int aux = 0;

		aux = find_node(root, node);
		if (node->left)
			aux &= croos_tree(root, node->left);
		if (node->right)
			aux &= croos_tree(root, node->right);
		return (aux);
	}
	return (0);
}
/**
 * binary_tree_is_bst - checks if a tree is a correctly formatted BST
 * @tree: Tree to check
 * Return: 1 if it is a BST, 0 if not
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (croos_tree((binary_tree_t *)tree, (binary_tree_t *)tree));
}
