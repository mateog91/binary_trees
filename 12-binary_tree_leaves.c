#include "binary_trees.h"
/**
 * binary_tree_leaves - measures the leaves of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: integer leaves of tree
 * If tree is NULL, your function must return 0
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	/* Base Case 1: node is NULL */
	if (tree == NULL)
		return (0);
	/* Recursive Case */

	leaves = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	/* Base Case 2: Is a leaf, both branches are NULL */
	if (leaves == 0)
		return (1);
	/* Current node Not a leave, return number of leaves found*/
	return (leaves);
}
