#include <iostream>
#include <conio.h>
using namespace std;
class selection_sort
{
    int i, j, n, temp, index_min;
    int A[];
public:
    void set_data();
    void insertion_sort_in_ascending_order();
    void insertion_sort_in_descending_order();
    void output_function();
};
void selection_sort::set_data()
{
    cout << "Set Array range(n): ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
}

void selection_sort::insertion_sort_in_ascending_order()
{
    for(i=0; i<n; i++)
    {
        index_min = i;
        for(j=i+1; j<n; j++)
        {
            if(A[index_min] > A[j])
            {
                index_min = j;
            }
        }
        if(index_min != j)
        {
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
    cout << endl;
}

void selection_sort::insertion_sort_in_descending_order()
{
    for(i=0; i<n; i++)
    {
        index_min = i;
        for(j=i+1; j<n; j++)
        {
            if(A[index_min] < A[j])
                index_min = j;
        }
        if(index_min != j)
        {
            temp = A[index_min];
            A[index_min] = A[i];
            A[i] = temp;
        }
    }
}

void selection_sort::output_function()
{
    for(i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int main()
{
    cout << "//Selection sort in Ascending order -> " << endl;
    selection_sort obj1, obj2;
    obj1.set_data();
    obj1.insertion_sort_in_ascending_order();
    obj1.output_function();
    cout << endl << endl;

    cout << "//Selection sort in Descending order -> " << endl;
    obj2.set_data();
    obj2.insertion_sort_in_descending_order();
    obj2.output_function();
    getch();

    return 0;
}
