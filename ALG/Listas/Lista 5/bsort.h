void swap(int* xp, int*yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bSort(int arr[], int arr_size)
{
    int swapped;
    for (int i = 0; i<arr_size; i++)
    {
        int swapped = 0;
        for (int j=0; j<arr_size; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapped = 1;
            }
        }

        if (!swapped)
        {
            break;
        }
    }
}