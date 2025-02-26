## 02-26-2025 Hashing

Hashing is simply passing some data through a formula (or function) that produces a result, called a hash.

The Hash is a vlue that is used to represent the data in some manner, like a small string or integer.

### Uses
* Cryptographic
* Error correction (checksums)
* Checking for changes
* Hash tables (Constant time)

### Hash Tables
One way hashing is NOT equal to hash tables.

Hash tables are simply data structures that strive to be a constant lookup tike table. 

In many languages, they are built in.

### Terms
- Hash Table - Just an array in which keys are mapped to array positions by a hash function
- Hash Function: A function H that receives some input x, and turns it into an integer value i (the key). The returned integer value can be adjusted to fit an array by using modules
- Key: The value returned by a hash function
- Collision: When two different pieces of data return the same key.
- Collision Resolution: A way o fhandling collisions
   - Collision Resolution schemes are divided into:
   - Open addressing
   - Chaining
- Perfect Hashing: Every input item ges a perfectly unique key.
- Load Factor: The size of the table compared to the size of the data set.

### Collision Resolution
Open Addressing - Finding another spot.

Three methods of Open Addressing:
* Linear Probing
* Quadratic Probing
* Double Hashing
* Psuedo Random Probing


Chaining - Creating a linked list at the spot of collision, and just adding onto the list as items collide
* Separate Chaining: There will be a value in the array that also has a linked list, so it will be fast if you're looking for the element that's in the array.
* Direct Chaining: 

### Clustering
* Primary Clustering: The tendency for some collision resolution schemes to create long runs of filled slots at the hash functions initial choice to place a value in the table
* Secondary Clustering: The same as primary clustering, but not at a hash functions first choice, usually the second or third choice.
