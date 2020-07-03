//Insertion sort
#include <iostream>
using namespace std;
class Insertion_sort
{
    int n, i, j, index;
    int A[];
public:
    void set_data();
    void Insertion_sort_in_Ascending_order();
    void Insertion_sort_in_Descending_order();
    void output();
};

void Insertion_sort::set_data()
{
    cout << "set the Array limit: ";
    cin >> n;
    cout << "Set elements for Array:\n";
    for(i=0; i<n; i++)
        cin >> A[i];
}

void Insertion_sort::Insertion_sort_in_Ascending_order()
{
    for(i=1; i<n; i++)
    {
        index = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > index)
        {
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = index;
    }
}

void Insertion_sort::Insertion_sort_in_Descending_order()
{
    for(i=1; i<n; i++)
    {
        index = A[i];
        j = i;
        while(j >= 0 && A[j-1] < index)
        {
            A[j] = A[j-1];
            j = j - 1;
        }
        A[j] = index;
    }
}

void Insertion_sort::output()
{
    cout << "Output:\n";
    for(i=0; i<n; i++)
        cout << " " << A[i];
}

int main()
{
    Insertion_sort obj1, obj2;

    cout << "Insertion sort in Ascending order: \n";
    obj1.set_data();
    obj1.Insertion_sort_in_Ascending_order();
    obj1.output();
    cout << endl;

    cout << "Insertion sort in Descending order: \n";
    obj2.set_data();
    obj2.Insertion_sort_in_Descending_order();
    obj2.output();

    return 0;
}
