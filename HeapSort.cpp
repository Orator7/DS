#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

class HeapSort
{
public:
    int *arr;
    int size;

    HeapSort(int *arr, int size)
    {
        this->size = 0;
        this->arr = arr;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    int left(int i)
    {
        return 2 * i;
    }

    int right(int i)
    {
        return 2 * i + 1;
    }

    void MaxHeapify(int *arr, int i, int size)
    {
        int largest;
        int l = left(i);
        int r = right(i);
        if (l <= size && arr[l] > arr[i])
        {
            largest = l;
        }
        else
        {
            largest = r;
        }
        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            MaxHeapify(arr, largest, size);
        }
    }

    int BuildMaxHeap(int*arr)
    {
        for (int i = size / 2; i < 1; i--)
        {
            MaxHeapify(arr, i, size);
        }
    }

    void HeapSort()
    {

    }
};

int main()
{
    int array[7] = {72, 36, 38, 12, 3, 35, 32};
    HeapSort obj(array, 7);
    obj.insert(7);
    for (int i = 0; i < 5; i++)
    {
        cout << obj.arr[i] << " ";
    }
    cout << endl;
    return 0;
}