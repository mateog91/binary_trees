#include "binary_trees.h"
/**
 * binary_tree_nodes - measures the nodes of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: integer nodes of tree
 * If tree is NULL, your function must return 0
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	/* Base Case 1: is NULL or is a leaf */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursive Case: is a node and searches for nodes left and right */

	nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes);
}
