#include <iostream>
using namespace std;

int main()
{
    //number 1
    //int size = 5;
    //int arr1[5] = { 10, 20, 30, 40, 50 };
    //int arr2[5];
    //int* p1 = arr1;
    //int* p2 = arr2;
    //for (int i = 0; i < size; i++) {
    //    *p2 = *p1;
    //    p1++;
    //    p2++;
    //}
    //cout << "new array: ";
    //for (int i = 0; i < size; i++) {
    //    cout << arr2[i] << " ";
    //}
    //number 2
    int size = 5;
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* p1 = arr;
    int* p2 = arr + size - 1;
    for (int i = 0; i < size / 2; i++) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2--;
    }
    cout << "new aray:";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}