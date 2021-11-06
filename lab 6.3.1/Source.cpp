// Варіант 6(Ітераційний спосіб)
#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Init(int* b, const int n)
{
    for (int i = 0; i < n; i++)
        b[i] = -10 + rand() % 21;
}

template<typename T>
void Init(T* b, const int n)
{
    for (int i = 0; i < n; i++)
        b[i] = -10 + rand() % 21;
}

void Print(int* b, const int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ,";
    cout << " }";
}

template<typename T>
void Print(T* b, const int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ,";
    cout << " }";
}

int Sum(int b[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += b[i];
    return s;
}

template<typename T>
T Sum(T b[], const int n) 
{
    T s = 0;
    for (int i = 0; i < n; i++)
        s += b[i];
    return s;
}

int main()
{
    srand((unsigned)time(NULL));
    int n;
    cout << "n = "; cin >> n;
    int* b = new int[n];
    Init<int>(b, n);
    Print<int>(b, n);
    Sum<int>(b, n);
    cout << "S = " << Sum(b,n) << endl;

    delete[] b;
    b = nullptr;
    return 0;
}