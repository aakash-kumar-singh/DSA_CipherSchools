#include <iostream>
using namespace std;

void b(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void p(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {5, 1, 4, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);
    p(a, n);
    b(a, n);
    p(a, n);
    return 0;
}
