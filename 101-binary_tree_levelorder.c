#include "binary_trees.h"
/**
 * binary_tree_levelorder -goes through a binary tree using level-order
 * traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to print function
 *
 * Return: Nothing
 * If tree or func is NULL, do nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base Case */
	if (tree == NULL || func == NULL)
		return;
}
