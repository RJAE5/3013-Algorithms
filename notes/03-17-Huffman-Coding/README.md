## 03-17-2025 Huffman Coding

### Compression
Two kinds, lossy and loss-less compression. Most picture/video/audio compressions are lossy, meaining some data is lost forever. Lossless compression is found typically in zip files where maintaining data integrity is absolutely crucial.

### Huffman Codes
* Provide a unique way of using Binary Tree to "compress" data
* Each letter gets a binary code

### Huffman Tree
To build a Huffman tree, we sort the frequencies into increasing order 

Then we choose the two smallest values and construct a binary tree with labeled edges.


The bit string encoding of values will be unique due to every letter being stored in only leaf nodes. This is how we know when to stop when given any particular bit string. This is called prefix encoding due to this fact.