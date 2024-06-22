# Binary Trees Project

This repository contains implementations of various operations and algorithms related to binary trees in C. It is part of a group project for learning about binary trees, algorithms, and data structures.

## Project Overview

The project includes implementations for the following operations and functionalities:

1. **Node Creation**: Creating nodes for a basic binary tree structure.
2. **Insertion**: Inserting nodes as left or right children of existing nodes.
3. **Deletion**: Deleting an entire binary tree.
4. **Node Properties**:
   - Checking if a node is a leaf.
   - Checking if a node is a root.
5. **Tree Traversals**:
   - Pre-order traversal.
   - In-order traversal.
   - Post-order traversal.
6. **Tree Metrics**:
   - Calculating the height of the tree.
   - Calculating the depth of a given node.
   - Calculating the size (number of nodes) of the tree.

## File Structure

The project files are structured as follows:

- `binary_trees.h`: Header file containing function prototypes and structure definitions.
- `0-binary_tree_node.c` to `10-binary_tree_depth.c`: Implementation files for each functionality.
- `binary_tree_print.c`: Helper file for visualizing binary trees (not part of the core implementation).
- `main.c` (for testing purposes): Various main files (`0-main.c` to `10-main.c`) provided to test each functionality.

## Usage

To compile and run any of the provided test files:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c <file_to_compile>.c 0-main.c -o <output_file>
./<output_file>
