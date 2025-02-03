#include <iostream>
using namespace std;

// Binary heap == priority queue
// Min heap -> Children > Parents
// Max heap -> Parents > Children

// Left child = 2 * i
// Right child = 2 * i + 1
// Parent = 2 / i



class Heap
{
    int* heap;
    int bum;

    void swap(int i, int j)
    {
        int temp = heap[i];
        heap[i] = heap[j];
        heap[j] = temp;
    }

    void bubbleUp(int i)
    {
        int parent = i / 2;
        while(heap[parent] > heap[i])
        {
            swap(parent, i);
            i = parent;
            
            parent = i / 2;

            if(!parent)
                break;
        }

    }

        void bubbleDown()
    {
        int i = 1;
        int parent = i / 2;
        // while()
        // {

        // }

    }

public:
    Heap()
    {
        heap = new int[100];
        bum = 1;
    }

    int pop()
    {
        int temp = heap[1];
        bum--;
        swap(bum, 1);
        bubbleDown();
        return 0;
    }

    void push(int x)
    {
        heap[bum] = x;
        //cout << "Pushed!" << endl;
        bubbleUp(bum-1);
        bum++;


    }

    void print()
    {
        for(int i = 1; i < bum; i++)
        {
            cout << heap[i] << " ";
        }
    }
};

int main()
{
    Heap heap;
    for(int i = 1; i < 10; i++)
    {
        heap.push(rand() % 100);
    }

    heap.print();
    cout << endl;

}