#. C - Hash tables
##### C Algorithm Data Structure
### Learning Objectives

1. What is a hash function
A hash function is a function used by a hash table to assign an index to each <br> key passed to it as an argument. Returns the index.
2. What makes a good hash function
- Uniformity : distributes keys uniformly throughout the hash table
- Efficiency : speedy hashing and key retrieval
- Universality : makes it difficult to deduce the key from its hash value
- Adaptability : adapts to changes in data size and format
  e.t.c ...
3. What is a hash table, how do they work and how to use them
A hash table is a data structure that maps keys to its values at a given index 
4. What is a collision and what are the main ways of dealing with collisions in the context of a hash table
Collisions are cases where two keys have been assigned the same index. Two methods can be used to handle collisions:
- Chained hashing method : `` Each index contains a linked list of key-value pairs. ``
- Open Address Hashing method : `` Search for the next available slot when a collision occurs. ``
4. What are the advantages and drawbacks of using hash tables

5. What are the most common use cases of hash tables
- Used for indexing and searching large volumes of data i.e searcg engines use hash tables to store the web pages that it has indexed
- Data is cached in memory using hash tables
- Hash functions used in cryptography to create digital signatures, validate data and guarantee data integrity
- Used for implementing database indexes
