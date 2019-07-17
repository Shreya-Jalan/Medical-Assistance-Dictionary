# Medical-Assistance-Dictionary

Abstract:

Any system management generally speaks to the fact that the information to be delivered is highly time sensitive. And especially even more so, when it comes to the matter of intensive care unit in hospitals. Hence this is a topic that is in thorough focus and found much development. But one ever demanding need especially with the increase in database applications is data handling. The medicines provided for every symptom should have a database representation. The database should be managed in such a way that effective searching ,insertion, and deletion is also possible through the same. One of the simplest concepts involve binary search tree. A more efficient method would be using of trie data structure method, which is in high demand these days.

INTRODUCTION

 In the olden days, doctors used to write down all the names of the medicines and symptoms is a book. Whenever in doubt, they would refer to it. But with the today’s world developing into a smart world, Internet and its related things is a boon to us. Most of the things or services are operated by automated processes with the user friendly mobiles. Recently the growth of electronic medical record has been increasing as per the needs of the people in this world. This project is based on the electronic medical record. It helps the people to know the medicines for the symptoms they have. This EMR is a very big help to those who are pursuing medicine. It is helps remember the medicines for the symptoms and allows them to work on it easily. The basic structure of EMR is the name of the symptom along with its medicines name. 
This electronic record has all the list of medicines. When name of the symptom is entered, it shows the list of medicines which is capable of curing the symptoms. We have used Trie Data structure here for easy search as we know that Trie data structure has the fastest execution time. 

PROPOSED METHOD:

1.	Trie data structure

Trie is an ordered tree structure, which is used mostly for storing strings (like words in dictionary) in a compact way.
In a trie, every node (except the root node) stores one character. By traversing up the trie from a leaf node to the root node, a string can be constructed. By traversing down the trie from the root node to a node nn, a common prefix can be constructed for all the strings that can be constructed by traversing down all the descendant nodes (including the leaf nodes) of node n.
It works upto level 3 searching.

2. Binary search tree with hashing

This is one of the most fundamental concepts taught in data structures and algorithms in which we can traverse the dictionary using binary search tree where the first letters are arranged alphabetically using the concepts of hashing.
In computer science, Binary search tree sometimes are called ordered or sorted binary trees are a particular type of container.Binary search trees keep their keys in sorted order, so that lookup and other operations can use the principle of binary search: when looking for a key in a tree (or a place to insert a new key), they traverse the tree from root to leaf, making comparisons to keys stored in the nodes of the tree and deciding, on the basis of the comparison, to continue searching in the left or right subtrees.
