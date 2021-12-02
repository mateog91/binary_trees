#include "binary_trees.h"

/**
 * b_tree_height2 - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: integer height of tree
 * If tree is NULL, your function must return 0
 */
size_t b_tree_height2(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	/* Base Cases: NULL tree or is a leave */
	if (tree == NULL)
		return (0);

	/* Recursive Cases */
	if (tree->left != NULL)
		left = 1 + b_tree_height2(tree->left);
	if (tree->right != NULL)
		right = 1 + b_tree_height2(tree->right);

	/* Comparison to return biggest height*/
	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: integer balance factor
 * If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		h_left = 1 + b_tree_height2(tree->left);
	if (tree->right != NULL)
		h_right = 1 + b_tree_height2(tree->right);

	long int bf = h_left - h_right;
	return (bf);
}
