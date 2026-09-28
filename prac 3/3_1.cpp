
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Bubble Sort: ";
    printArray(arr, n);
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "Selection Sort: ";
    printArray(arr, n);
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Insertion Sort: ";
    printArray(arr, n);
}

int main()
{
    int n;

    cout << "Enter number of answer sheets: ";
    cin >> n;

    int arr[n];

    cout << "Enter marks: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int bubble[n], selection[n], insertion[n];

    for (int i = 0; i < n; i++)
    {
        bubble[i] = arr[i];
        selection[i] = arr[i];
        insertion[i] = arr[i];
    }

    bubbleSort(bubble, n);
    selectionSort(selection, n);
    insertionSort(insertion, n);

    return 0;
}