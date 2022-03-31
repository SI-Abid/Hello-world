#include<iostream>
using namespace std;

// template<typename T>
// void swap(T &a, T &b)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }

template<typename T>
void swap(T a[], T b[], size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        swap(a[i], b[i]);
    }
}

int main()
{
    int ones[] {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int twos[] {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    const int sz {size(ones)};
    
    for(int i = 0; i < sz; i++)
        cout << ones[i] << " " << twos[i] << "\t";
    cout << endl;

    swap(ones, twos, sz);

    for(int i = 0; i < sz; i++)
        cout << ones[i] << " " << twos[i] << "\t";
    cout << endl;

    int x = 1;
    int y = 2;
    swap(x, y);
    cout << x << " " << y << endl;
    int &z = x;
    cout << z << endl;
    z = 3;
    cout << x << " " << z << endl;
    return 0;
}