# Notes 02-05

## Recursion
Recursion is simply a function that calls itself, has a base case which terminates recursive calls.

Dr. Griffin says it reduces search space. "You need some instruction that moves you towards the base case."

### Recursive Solutions
Iterative is just loops. Recursion is defined as above.

Recursion is not efficient, it takes up space on the runtime stack quickly.

A lot of recursive solutions can be written iteratively and vise versa. We try to use iterative unless recusion is absolutely necessary or not extremely costly.

> Example: Reverse the integer `30146`

We can use mod 10 to get the last digit and use integer division to reduce the number
```cpp
void reverse(int x)
{
    // Recursive solution
    if(x == 0)
        return;
    
    std::cout << x % 10;
    reverse(x / 10);
}
```
<br>

> Example: Add the digits of the integer `32416`

```cpp
int addDigits(int x)
{
    if(x == 0)
        return 0;
    
    return (x % 10) + sum(x / 10);
}
```

<br>

> Example: Code the Fibonnaci Sequence

```cpp
int fib(int x)
{
    if(x <= 1)
        return 1;
    else
        return fib(x - 1) + fib(x - 2);
}
```
This is very wasteful because you end up calculating the same numbers with two different recursive calls

I may be speculating, but I think your base case can be:
```cpp
if(x == 3)
    return 3;
else if (x == 2)
    return 2;
else if (x <= 1)
    return 1;
```
Not sure if the 3 comparisons would be more wasteful than recursively calling for small numbers, but definitely for bigger numbers.

<br>

> Example: Traverse an array/linked list recursively

```cpp
void traverseLL(Node* p)
{
    if(p == nullptr)
        return;

    cout << p->data;

    traverseLL(p->next);
    // We could just put the cout here and it would print it in reverse
}

void traverseArray(int* A, int size, int i)
{
    if(i == size)
        return;
    
    cout << A[i];

    traverseArray(A, size, ++i)
    // We could just put the cout here and it would print it in reverse
}

void printTree(Node* root)
{
    if(!root)
        return;
    
    // Cout here would be pre-order traversal
    printTree(root->left);

    cout << root-> data // In order traversal
    
    printTree(root-> right);
    // cout here would be a post-order traversal
}
```

### Palindromes
We do it without using string manipulation functions for some reason
```cpp
bool isPalindrome(string word, int i, int j)
{
    if(i >= j);
        return true;
    
    if(word[i] != word[j])
        return false;
    else
        return isPalindrome(word, ++i, --j);
}
```
<br>

He didn't cover this, but with string manipulation, it's much simpler

<br>

```cpp
bool isPalindrome(string word)
{
    if(word.length() <= 1)
        return true;
    
    if(word.front() != word.back())
        return false;
    else
        return isPalindrome(word.substr(1, word.length() - 2));
}