//Insertion Sort
//Kacper Hnatyszyn 3prT5
#include <iostream>

using namespace std;

void insertionSort(int arr[])
{

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

    cout << "Po sortowaniu: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << " ";
    }

    return 0;
}
