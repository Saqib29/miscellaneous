#include <bits/stdc++.h>
using namespace std;

void print(vector<int> vect)
{
    cout << "Total Elements: " << vect.size() << "\n";
    for(int datam:vect)
        cout << datam << " ";
    cout << "\n\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /// create

    /// vector<type> name (elements)

//    vector<int> vct (5); // int vect[5];
//    print(vct)

//    vector<int> vct;
//    print(vct);

//    vector<int> vct(5, 1);  // where 2nd value indicates all values should set as 1(or any you determine)
//    print(vct);


//    vector<int> vct({1,2,3,4,5});   /// int vct[] = {1,2,3,4,5};
//    print(vct);

//    vector<int> vct = {1,2,3,4,5};   /// int vct[] = {1,2,3,4,5};
//    print(vct);

//    vector<int> vct = {1,2,3,4,5};   /// int vct[] = {1,2,3,4,5};
//    vector<int> vct2 = vct;
//    print(vct2);

    /// add elements
//    vector <int> vct = {1,2,3};
//    vct.push_back(5);
//    vct.push_back(7);
//    vct.push_back(9);
//    print(vct);


//    vector <int> vct = {1,2,3};
    /// vct.begin()
    /// vct.end()

    /// vct.insert(position, value)

//    vct.insert(vct.begin() , 7);
//    vct.insert(vct.begin()+2, 7);

//    vct.insert(vct.end(), 7);
//    vct.insert(vct.end()-1, 7);
//    vct.insert(vct.begin()+1, 2,7); // means 2 times 7 will be added as 7 7 1 2 3
//    print(vct);

    /// read element

//    vector<int> data = {3,2,1,6,4,2};
//    cout << data[2] << "\n";
//    cout << data.front() << "\n";
//    cout << data.back() << "\n";

//    vector<int> data = {3,2,1,6,4,2};
//    for (int d:data){
//        cout << d << " ";
//    }

//    vector<int> vct = {3,2,1,6,4,2};
//    // to convert vector to array
//    int *ar = vct.data();
//    cout << ar[2];

    /// update
//    vector<int> vct = {3,2,1,6,4,2};
//    vct[2] = 29;
//    print(vct);

    /// vector swap
//    vector<int> vct = {3,2,1,6,4,2};
//    vector<int> vct2 = {9,8,7,6,5,4};
//
//    cout << "Before swap\n";
//    print(vct);
//    print(vct2);
//    vct.swap((vct2));
//    cout << "After swap\n";
//    print(vct);
//    print(vct2);


    /// delete
    vector<int> vct = {3,2,1,6,4,2};
    cout << "Before delete\n";
    print(vct);
    //vct.pop_back();
    //vct.clear();   // to clear all elements
    // to delete some elements as vct.erase(position1, position2)
//    vct.erase(vct.begin()+2, vct.begin()+2);
    vct.erase(vct.begin()+2, vct.end()-2);
    cout << "After delete\n";
    print(vct);




    return 0;
}
