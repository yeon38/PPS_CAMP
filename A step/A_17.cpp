#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int arr[10];
int main() {
	string a;
	int answer = 1;

	cin >> a;

	for (int i = 0; i < a.length(); i++) {
		arr[a[i] - 48]++;
	}

	int n1 = (arr[6] + arr[9]+1)/ 2;
	arr[6] = n1;
	arr[9] = n1;

	int max = 0;
	for (int i = 0; i < 10; i++) {
		if(max < arr[i]) max = arr[i];
	}

	
	cout << max;

	return 0;
}