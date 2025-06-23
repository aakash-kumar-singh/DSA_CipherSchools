#include <iostream>
using namespace std;

void s(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[m])
                m = j;
        }
        swap(a[i], a[m]);
    }
}

void p(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {64, 25, 12, 22, 11};
    int n = sizeof(a) / sizeof(a[0]);
    p(a, n);
    s(a, n);
    p(a, n);
    return 0;
}
