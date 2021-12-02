#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
 *
 * Return: Nothing
 * If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base Cases */
	if (tree == NULL || func == NULL)
		return;
	/* Recursive Cases left */
	binary_tree_inorder(tree->left, func);
	/* Print Node */
	func(tree->n);
	/* Recursive Cases right */
	binary_tree_inorder(tree->right, func);
}
