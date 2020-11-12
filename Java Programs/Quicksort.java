#include <iostream>
#include <stdio.h>
template <class t>
using namespace std;

void quick_sort(t a[], int low, int high)
{
    t k;
    int i, j, flag = 1;
    if (low < high) {
        k = a[low];
        i = low + 1;
        j = high;
        while (flag) {
            while ((a[i] <= k) && (i < j)) i++; while (a[j] > k)
                j--;
            if (i < j)
                swap(a, i, j);
            else
                flag = 0;
        }
        swap(a, low, j);
        quick_sort(a, low, j - 1);
        quick_sort(a, j + 1, high);
    }
}

template 
void swap(t1 a[], int x, int y)
{
    t1 temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
int main()
{
    int i, n, a[20];
    cout << "Enter the number of elements to be sort::"; cin >> n;
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) cin >> a[i];
    quick_sort(a, 0, n - 1);
    cout << "The sorted elements are:\n";
    for (i = 0; i < n; i++)
        cout << a[i] << endl;
    ;
}
