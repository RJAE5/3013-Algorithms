#include <iostream>

using namespace std;

bool in_array(int *a, int x, int index)
{
    for(int j = 0; j <= index; j++)
    {
        if(a[j] == x)
            return true;

    }
    return false;
}

void print(int *a, int size)
{
    for(int j = 0; j <= size; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;

}

int binary_search(int *a, int key, int size)
{
    int f = 0;
    int r = size - 1;
    int m = (f + r) / 2;
    bool found = false;

    while(!found)
    {  
        if(a[f]==key)
            return f;
        
        if(a[m] == key)
            return m;

        if(a[r] == key)
            return r;

        if(key > a[m])
        {
            f = m + 1;
        }
        else
        {
            r = m - 1;
        }
        
        m = (f + r) / 2;

        if(f == r == m)
            return -1;
    }
    return -1;

}

void swapIndex(int *a, int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}

void bubble_sort(int *a, int size)
{
    // Finds smallest element and places it in proper location
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size - 1; j++)
        {
            if(a[i] > a[j])
                swapIndex(a, i, j);
        }
    }
}



int main()
{
    int size = 100;
    int* nums = new int[size];
    bool unique;
    int r;


    for(int i = 0; i < size; i++)
    {
        r = rand() % 10000;
        while(in_array(nums, r, i))
        {
            r = rand() % 10000;
        }
        nums[i] = r;
    }

    print(nums, size);
    cout << endl;

    bubble_sort(nums, size);
    print(nums, size);

    cout << endl << endl;
    cout << binary_search(nums, 383, size) << " ";
}