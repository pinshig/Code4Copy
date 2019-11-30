#include <iostream>
#include "sorts.h"
using namespace std;

int main()
{
    int n = 5;
    int array2[n] = {9,6,4,3,1};
    int array1[n];
    recoverArray(array1, array2, n);
    SelectionSort(array1, n);
    cout << "Selection Sort" << endl;
    for(int i = 0; i<n; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;

    recoverArray(array1, array2, n);
    BubbleSort(array1,n);
    cout << "Bubble Sort" << endl;
    for(int i = 0; i<n; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;

    recoverArray(array1, array2, n);
    InsertionSort(array1,n);
    cout << "Insertion Sort" << endl;
    for(int i = 0; i<n; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;



}

void mySwap(int array[] ,int a, int b)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

void recoverArray(int array1[], int array2[], int n)
{
    for(int i=0; i<n; i++)
    {
        array1[i] = array2[i];
    }
}
