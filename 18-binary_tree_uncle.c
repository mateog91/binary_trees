#include "binary_trees.h"
/**
 * binary_tree_sibling2 - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return:
 * Pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling2(binary_tree_t *node)
{
	binary_tree_t *parent_node = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent_node = node->parent;
	if (node == parent_node->left)
		return (parent_node->right);
	return (parent_node->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return:
 * Pointer to the uncle node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling2(node->parent));
}
