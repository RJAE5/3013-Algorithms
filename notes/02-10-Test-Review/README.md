## 02-10-2025 Test Review Questions

## Review Notes
**If it doesn't specifically say it's a balanced BST, then its O(n) time**

<br>

Sort 11, 2, 3, 5, 7 in a binary heap

1. Insert value at next available spot
2. Compare with parent recursively, swap if smaller
    - Parent = i / 2
3. Repeat until all values are stored
```
------------------------------------------------
| - | 2 | 11 |  |  |  |  |  | 
------------------------------------------------
  0    1   2    3    4    5    6    7    8    9

------------------------------------------------
| - | 2 | 11 | 3 |  |  |  |  | 
------------------------------------------------
  0    1   2    3    4    5    6    7    8    9

------------------------------------------------
| - | 2 | 11 |  3  |  5  |  |  |  | 
------------------------------------------------
  0    1   2    3    4    5    6    7    8    9

------------------------------------------------
| - | 2 | 5 |  3  |  11  |  |  |  | 
------------------------------------------------
  0    1   2    3    4    5    6    7    8    9

------------------------------------------------
| - | 2 | 5 |  3  |  11 | 7  | 1  |  | 
------------------------------------------------
  0    1   2    3    4    5    6    7    8    9

------------------------------------------------
| - | 2 | 5 |  1  |  11 | 7  | 3  |  | 
------------------------------------------------
  0    1   2    3    4    5    6    7    8    9

------------------------------------------------
| - | 1 | 5 |  2  |  11 | 7  | 3  |  | 
------------------------------------------------
  0    1   2    3    4    5    6    7    8    9
```

Left child = 2 * i
Right child = 2 * i + 1

<br>

### Floyd's Alogrithm

Start at n/2, the first inner node with a child. Swap your way up and then it will be in heap order.

Makeheap runs using _Amortized Cost_, which means it will run in **O(n)**.

Almost everything using binary data structures will be **O(n)**.

**Heapify steps**
1. Start at n/2
2. Compare children using left and right child calculations from earlier
3. Swap if parent is bigger than children
4. Move the index -1 and repeat

We may run into a scenario where the parent isn't smaller than both children. In this case, we just bubble down the bigger parent to achieve heap order.

```
------------------------------------------------------
| - | 14 | 3 |  2  | 15 | 17 | 5  | 7 | 21 | 11 | 31 |
------------------------------------------------------
  0    1   2    3    4    5    6    7    8    9   10
                          /\
                          start
```
Go through above example for studying

### Binary Heap
Binary Heap = Priority Queue

Binary Heaps are efficient, nearly everything is **O(log(n))**, the only exception is heapify/makeheap which is **O(n)**.

Binary implies divide and concquer algorithms which is **O(log(n))**

Priority queues can also be made using linked lists, which are **O(n)** for most things, so a choice has to be made, and more often than not, binary heaps are used. Removal is the most beneficial part of a prioity queue, which is **O(1)**

## Do we count the nodes or the paths for height?

## How to implement a priority queue?

## What are the pros and cons of implementing an undo feature using a stack?