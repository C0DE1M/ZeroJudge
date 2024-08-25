#include <iostream>
using namespace std;

int arr[1001];

void sort(int i)
{
    for (int j = i; j >= 0; j--)
    {
        if (arr[i] % 10 < arr[j] % 10)
        {
            swap(arr[i], arr[j]);
            i = j;
        }
        else if (arr[i] / 10 > arr[j] / 10 && arr[i] % 10 == arr[j] % 10)
        {
            swap(arr[i], arr[j]);
            i =j;
        }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            sort(i);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}