// WAP that uses an overloaded constructor to dynamically allocate memory to an array and thus find
// the largest of its elements.

#include <iostream>
using namespace std;

class Dynamic_Allocate
{
private:
    int size;
    int *arr;

public:
    Dynamic_Allocate(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    void get_input()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the element: " << endl;
            cin >> arr[i];
        }
    }
    int get_max()
    {
        int max = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
};

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    Dynamic_Allocate d(n);
    d.get_input();
    int max_element = d.get_max();
    cout << "Max: " << max_element;
    return 0;
}