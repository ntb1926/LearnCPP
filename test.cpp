#include <iostream>

using namespace std;
int main()
{
    int A[5] = {3, 2, 5, 6, 8};
    int length = sizeof(A) / sizeof(int);
    for (int i : A)
    {
        cout << i << "\t";
    }

    
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                // int temp;
                // temp = A[j];
                // A[j] = A[i];
                // A[i] = temp;
                swap(A[i], A[j]);
            }
        }
    }
    for (int i : A)
    {
        cout << i << "\t";
    }
    return 0;
}
