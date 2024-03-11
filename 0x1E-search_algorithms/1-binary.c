#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 *                 using the Binary search algorithm
 *
 * @array: pointer to the first element of the sorted (asc) array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located,
 *         -1 if value not in array and/or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t mid;

    if (!array)
        return (-1);
    
    if (size == 1)
    {
        if (value == *(array))
            return (0);
        else
            return (-1);
    }

    mid = size / 2;
    if (value > *(array + mid))
        binary_search((array + mid), size - mid, value);
    else if (value < *(array + mid))
        binary_search(array, mid, value);
    else
        return (mid);
}

/* int binary_search(int *array, size_t size, int value)
{
    size_t mid, high, low;

    if (!array)
        return (-1);

    mid = size / 2;
    high = size - 1;
    low = 0;
    while (high > low)
    {
        print the array being searched
        if (*(array + mid) > value)
        {
            high = mid;
            mid = mid / 2;
        }
        else if (*(array + high) < value)
        {
            low = mid;
            mid = ((high - low) / 2) + mid;
        }
        else
            return (mid);
    }

    return (-1);

}*/