#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &v, int left, int right) {
	int pivot = v[left];
	while (left < right) {
		while (left < right&&v[right] >= pivot) --right;
		v[left] = v[right];
		while (left < right&&v[left] <= pivot) ++left;
		v[right] = v[left];
	}
	v[left] = pivot;
	return  left;
}
void QuickSort(vector<int> &v, int left, int right) {
	
	if (left < right) {
		int pivpos = partition(v, left, right);
		QuickSort(v, left, pivpos-1);
		QuickSort(v, pivpos+1, right);
	}
}
int main() {
	vector<int> v = { 1,3,2 };
	QuickSort(v, 0, 2);
	auto it = v.begin();
	for (it; it != v.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}