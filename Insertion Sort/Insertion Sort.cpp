//Insertion Sort
//Kacper Hnatyszyn 3prT5
#include <iostream>

using namespace std;

void insertionSort(int arr[])
{
    int j = 0;
    int key = 0;

    for (int i = 1; i < 5; i++)
    {
        key = arr[i]; // outer loop
        j = i - 1;
        while (j >= 0 && arr[j] > key) // inner loop
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
    }
}

int main()
{
    int myarray[5];
    cout << "Podaj 5 liczb: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarray[i];
    }

    cout << "Przed sortowaniem: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<myarray[i]<<" ";
    }

    insertionSort(myarray); 

    cout << endl << "Po sortowaniu: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }

    return 0;
}
