#include "sorts.h"
//蛮力法
//选择排序
void SelectionSort(int array[], int n)
{
    int min;
    for(int i=0; i<n-1; i++)
    {
        min = i;
        for(int j=i; j<n; j++)
        {
            if(array[i] > array[j])
            {
                min = j;
            }
        }
        mySwap(array, i, min);
        
    }
}

//冒泡排序
void BubbleSort(int array[], int n)
{
    for(int i=n-1; i>0; i--)    //0位上的数不用排序
    {
        for(int j=0; j<=i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                mySwap(array, j, j+1);
            }
        }
    }
}

//减治法
//插入排序
void InsertionSort(int array[], int n)
{
    if(n < 1) return;
    for(int i=1; i<n; i++)
    {
        int temp = array[i];
        int j;
        for(j=i-1; j>=0 && temp<array[j]; j--)
        {
            array[j+1] = array[j];
        }
        array[j+1] = temp;
        
        
    }
}
