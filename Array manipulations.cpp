/* 
sorting - pos 
insert - pos 
delete - pos 
search - binary 
*/


#include <iostream>

using namespace std;

// ---------------------------------------------------------------------------------------------------------------------------------------------
void sorting(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);                             // <<-- ⚠⚠⚠ SORTING ⚠⚠
            }
        }
    }
    
    cout << "\nSorted Array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// ---------------------------------------------------------------------------------------------------------------------------------------------


void inserting(int arr[], int size)
{
    // new element, pos
    int new_element, pos;
    
    cout << "Position: ";
    cin >> pos;
    
    for (int i = size - 1; i >= pos; i--)
    {
        swap(arr[i], arr[i+1]);
    }                                                           // <<-- ⚠⚠⚠ INSERTION (IN POSITION) ⚠⚠⚠
    
    cout << "New Element: ";
    cin >> new_element;
    
    arr[pos] = new_element;
    
    size++;
    
    cout << "\nNew Array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// ---------------------------------------------------------------------------------------------------------------------------------------------

void deleting(int arr[], int size)
{
    int pos;
    
    cout << "Position: ";
    cin >> pos;
    
    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i+1];
    }
                                                                    // <<-- ⚠⚠⚠ DELETING (IN POSITION) ⚠⚠⚠
    size--;
    
    cout << "\n\nNew Array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// ---------------------------------------------------------------------------------------------------------------------------------------------

void b_search(int arr[], int size)                              
{
    /*
    WAG NA PANSININ TO, NEED KASI SA BINARY 
    SEARCH AY SORTED ANG ARRAY KAYA NAG SEPARATE
    AKO NG SORT CODE SINCE VOID ANG GINAMIT KO
    SA MGA FUNCTION, WALA RETURN VALUE 
    */
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    cout << "\nSorted Array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
                                                                     // <<-- ⚠⚠⚠ BINARY SEARCH ⚠⚠⚠
    // DITO LANG MAG FOCUS
    // low high mid target
    int low = 0, high = size - 1, target, mid;
    
    cout << "\nTarget: ";
    cin >> target;
    
    while (low <= high)
    {
        mid = (low + high) / 2;
        
        if (arr[mid] == target)
        {
            cout << "\nTarget at element " << mid;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

// ---------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
    int size, choice;
    
    cout << "Size: ";
    cin >> size;
    
    int arr[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Element at [" << i << "]: ";
        cin >> arr[i];
    }
    
    cout << "\nOriginal Array: \n";
    for (int i: arr)
    {
        cout << i << " ";
    }
    
    cout << "\n\n1. Sort\n2. Insert\n3. Delete\n4. Search\nChoice: ";
    cin >> choice;
    
    if (choice == 1)
    {
        sorting(arr, size);
    }
    else if (choice == 2)
    {
        inserting(arr, size);
    }
    else if (choice == 3)
    {
        deleting(arr, size);
    }
    else if (choice == 4)
    {
        b_search(arr, size);
    }
    
    return 0;
}
























