#include <iostream>
#include <cassert>

using namespace std;

void msort(int a[], int x[], int s, int e) {
	if(e - s < 1) return;
	int m = (s + e) / 2;
	/*msort(a, x, s, m)
	msort(a, x, m + 1, e)*/
	int i = s;
	int j = m + 1;
	int k;
	int index;
	while(i <= m && j <= e) {
		if(a[i] <= a[j]) {
			a[index++] = x[i++];
		}

		else {
			a[index++] = x[j++];
		}
	}
}

/*void mergesort(int a[], int n) {
	int x[] = new int[len];
	msort(a, x, 0, len-1);
	delete []x;
}

bool sorted(int a[], int n) {

} */
