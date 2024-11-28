#include <iostream>
#include <vector>
#include <sstream> // for stringstream
using namespace std;

// defining class Vector
class Vector {
private:
    int size;
    int* a;

public:
    // Default constructor
    Vector() : size(0), a(nullptr) {
        cout << "Enter Size: ";
        cin >> size;
        a = new int[size];
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++) {
            cin >> a[i];
        }
    }

    // Parameterized constructor
    Vector(int size) : size(size) {
        a = new int[size]();
    }

    // Destructor
    ~Vector() {
        delete[] a;
    }

    // Overload '<<' operator
    friend ostream& operator<<(ostream& myout, const Vector& v) {
        myout << "[";
        for (int i = 0; i < v.size; i++) {
            myout << v.a[i];
            if (i < v.size - 1) myout << ", ";
        }
        myout << "]";
        return myout;
    }

    // Overload '>>' operator
    friend istream& operator>>(istream& myin, Vector& v) {
        myin >> v.size; // first read size
        v.a = new int[v.size]; // allocate memory
        myin.ignore(); // ignore the next character (to skip the opening bracket)
        char ch; // to read the character ','
        for (int i = 0; i < v.size; i++) {
            myin >> v.a[i];
            if (i < v.size - 1) myin >> ch; // read the comma
        }
        myin >> ch; // read the closing bracket
        return myin;
    }

    // Overload '+' operator
    friend Vector operator+(const Vector& v1, const Vector& v2) {
        int newSize = v1.size + v2.size;
        Vector v(newSize);
        for (int i = 0; i < v1.size; i++) {
            v.a[i] = v1.a[i];
        }
        for (int j = 0; j < v2.size; j++) {
            v.a[v1.size + j] = v2.a[j];
        }
        return v;
    }

    // Overload '-' operator
    friend Vector operator-(const Vector& v1, const Vector& v2) {
        int newSize = v1.size;
        Vector v(newSize);
        for (int i = 0; i < v1.size; i++) {
            if (i < v2.size) {
                v.a[i] = v1.a[i] - v2.a[i];
            } else {
                v.a[i] = v1.a[i]; // if v2 is shorter, just copy v1's element
            }
        }
        return v;
    }
};

int main() {
    Vector v1, v2;
    cout << "Enter first vector in the format: [size, element1, element2, ...]: ";
    cin >> v1; // using overloaded ">>" operator
    cout << "Enter second vector in the same format: ";
    cin >> v2;

    cout << "Vector 1: " << v1 << endl;
    cout << "Vector 2: " << v2 << endl;

    Vector vSum = v1 + v2; // using overloaded "+" operator
    cout << "Sum: " << vSum << endl;

    Vector vDiff = v1 - v2; // using overloaded "-" operator
    cout << "Difference: " << vDiff << endl;

    return 0;
}
