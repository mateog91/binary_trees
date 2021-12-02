#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: integer height of tree
 * If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	/* Base Cases: NULL tree or is a leave */
	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	/* Recursive Cases */
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	/* Comparison to return biggest height*/
	if (left > right)
		return (left + 1);
	return (right + 1);
}
