//Bubble sort
#include <iostream>

using namespace std;
class Bubble_sort
{
    int n, i, j;
    int A[];
public:
    void set_data();
    void Bubble_sort_in_Ascending_order();
    void Bubble_sort_in_Descending_order();
    void out_put();
};
void Bubble_sort::set_data()
{
    cout << "Array size? ";
    cin >> n;
    cout << "input data for array: \n";
    for(i=0; i<n; i++)
        cin >> A[i];
}

void Bubble_sort::Bubble_sort_in_Ascending_order()
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A[j] , A[j+1]);
            }
        }
    }
}

void Bubble_sort::Bubble_sort_in_Descending_order()
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(A[j] < A[j+1])
                swap(A[j], A[j+1]);
        }
    }
}

void Bubble_sort::out_put()
{
    for(i=0; i<n; i++)
        cout << " " << A[i];

}


int main()
{
    Bubble_sort obj1, obj2;

    cout << "Bubble sort for Ascending order:\n";
    obj1.set_data();
    obj1.Bubble_sort_in_Ascending_order();
    obj1.out_put();
    cout << endl;

    cout << "Bubble sort for Descending order\n";
    obj2.set_data();
    obj2.Bubble_sort_in_Descending_order();
    obj2.out_put();

    return 0;
}
