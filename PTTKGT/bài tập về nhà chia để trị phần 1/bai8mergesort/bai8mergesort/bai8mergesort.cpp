#include<iostream>
#include <conio.h>

using namespace std;


// Gộp hai mảng con 
void Merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];


    /* Copy dữ liệu sang các mảng tạm */
    for (int ii = 0; ii < n1; ii++)
        L[ii] = arr[left + ii];
    for (int jj = 0; jj < n2; jj++)
        R[jj] = arr[mid + 1 + jj];

    /* Gộp hai mảng tạm vừa rồi vào mảng arr*/
    int i = 0;     // Khởi tạo chỉ số bắt đầu của mảng con đầu tiên
    int j = 0;     // Khởi tạo chỉ số bắt đầu của mảng con thứ hai
    int k = left;  // IKhởi tạo chỉ số bắt đầu của mảng lưu kết quả

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy các phần tử còn lại của mảng L vào arr nếu có */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy các phần tử còn lại của mảng R vào arr nếu có */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
}


void Show(int A[], int size)
{
    for (int i = 0; i < size; ++i)
        std::cout << A[i] << " ";
}

int main()
{
    clock_t start, end;   // Khai báo biến thời gian
    double time_use;      // Thời gian sử dụng

    int arr[] = { 312, 311, 313, 35, 36, 37,1,2,3,4,5,6,7,1,1,2,3,2,3,2,2,2,2,2,3,32,3,2,32,3,23,23,2,32,3 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    start = clock();
    mergeSort(arr, 0, arr_size - 1);
    end = clock();
    time_use = (end-start) / CLOCKS_PER_SEC;

    cout << "Sorted array is \n";
    Show(arr, arr_size);

    cout << "\ntime used is: \n" << time_use;

    return 0;
}