
**Tree Insertion Timer**
=====================

**Overview**
------------

This is a C program that implements a tree insertion timer, which measures the time it takes to insert a node into a binary search tree. The program uses a queue data structure to store the nodes and allows the user to specify the number of nodes to insert.

**Features**
--------

* **Tree Insertion**: The program can be used to insert nodes into a binary search tree and measure the time it takes to do so.
* **Queue Data Structure**: The program uses a queue data structure to store the nodes, which allows for efficient insertion and retrieval of nodes.
* **User Input**: The program allows the user to specify the number of nodes to insert and enter the data for each node.

**Usage**
-----

### Running the Program

1. Compile the program using `gcc` or your preferred compiler.
2. Run the program by executing the compiled binary.
3. Follow the prompts to enter the number of nodes to insert and enter the data for each node.
4. The program will display the time taken to insert all nodes.

### Command Line Options

* None (program runs in interactive mode)

### Example Output
```
Enter number of nodes of tree:
5
Enter data for node 1: 10
Enter data for node 2: 20
Enter data for node 3: 30
Enter data for node 4: 40
Enter data for node 5: 50
Time taken to insert 5 nodes:- 5.001234 seconds
```

**Code Structure**
----------------

The code consists of four main functions:

1. `create_node`: creates a new node with a given data value.
2. `create_queue`: creates a new queue with a specified number of nodes.
3. `insert_node`: inserts a node into the binary search tree.
4. `main`: runs the program and prompts the user to enter data and measures the time taken to insert all nodes.

**License**
---------

The Tree Insertion Timer is released under the MIT License.

**Author**
-------

Sakshi Sharma
