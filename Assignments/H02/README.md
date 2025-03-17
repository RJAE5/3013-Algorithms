## H02 - Hashing Strategies and Collision Resolution
### Rykir Evans
### Description:

## Conceptual Questions (Part A)
### 1. Define Hashing and Collision Resolution

Hashing involves passing some data through a function to produce a result, called a **hash**. 


A **hash table** is some type of data structure that strives to be a "constant time lookup table". It uses the value of the hash to go directly to the item that is being stored, which the hash is based on.


**Open Addressing** (aka closed hashing) Is a type of collision resolution used which stays entirely within the hash table. If the data is hashed to a certain spot, and that spot is empty, it will go IN the table. Otherwise, some sort of probing sequence is used to identify another valid spot based on the original spot. This sequence repeats until a valid empty spot is found.

**Chaining** (aka open hashing) Is the other type of collision resolution which uses a data structure (typically a linked list) based out of the original spot within the hash table. If there is no list, it will create one. If one exists, the item being inserted into the table goes to the end of the list.

### 2. Collision Resolution Techniques
**Linear Probing** is a probing technique that simply looks at the next spot within the hashing table if the original spot is full. It repeats this sequence until an open spot is found.
* Pros: Simple to implement and understand
* Cons: Could result in primary clustering 

**Quadratic Probing** is another common probing technique that applies a simple quadratic formula to find the next spot. This formula is often resembling `(h(K) + i^2) mod m` which increases the space between examined spots quadratically.
* Pros: Works well for large table sizes
* Cons: Could result in secondary clustering

**Double Hashing** is a probing technique which applies a different hash function to get a new valid position.
* Pros: Minimizes secondary clustering 
* Cons: less intuitive and harder to implement

<br>

**Chaining** is capable of handling more data than table slots since it utilizes a linked list that is only attached to the table via the head, and this list has theoretically unrestricted growth, meaning a table with one slot could handle as much data as needed, it would just be horribly inefficient.

**Worst Case Time Complexity** for each collision resolution technique ends up being **O(n)** due to the possibility that data has the potential to hash to the same spot and attempt the probing sequence from there. This highly increases the odds that a dataset containing elements that will hash to the same first position and each technique can only expand in particular way, meaning all of the data must be searched using the probing technique.

### 3. Impacts of Hash Table Size
**Size** of a table has many defining factors of how a hash table will behave. For example, if the hash function is defined by modding the table size, all even and composite numbers will cause some type of clustering with enough data.

This is best mitigated by choosing a prime number for the size of the table, which will often yield a less common hash value depending on the data set.

Choosing a poor table size can lead to the aforementioned clustering rather soon, for example, if our table size was 10 and our data set was purely even numbers `2, 4, 6, ...` We would get fine placement for the first 5 numbers, but then every single number after that would be a collision.

Additionally, if our table is too small, we have the potential to start clustering much worse even if we chose a prime number for the table size. Conversely, with a table size that is far too big, we might not cluster as badly, but large amounts of space are wasted. This effect tends to be balanced by choosing a table size of around 20% bigger than the data set.