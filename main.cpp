#include <iostream>
#include <cassert>

using namespace std;

void msort(int a[], int x[], int s, int e) 
{
    if(e - s < 1) return;
    int m = (s + e) / 2;
    int i, j, k;
    i = s;
    j = m +1;
    k = 0;

    while (i <= m && j <= e) {
        if (a[i] < a[j]) {
            x[k++] = a[i++];
        }
        else {
            x[k++] = a[j++];
        }
    }
    while (i <= m) {
        x[k++] = a[i++];
    }
    while (j <= e) {
        x[k++] = a[j++];
    }
    for (i = s; i <= e; i++) {
        a[i] = x[i - s];
    }
}

    


void mergesort(int a[], int n) {
    int len;
    n = len;
    int * x = new int[len];
    msort(a, x, 0, len - 1);
    delete []x;

}
bool sorted(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
}

int main() {
    int a[] = {3, 2, 5, 21, 1};
    mergesort(a,5);
    assert(sorted(a,5));

    cout << "All tests passed." << endl;
    
}


