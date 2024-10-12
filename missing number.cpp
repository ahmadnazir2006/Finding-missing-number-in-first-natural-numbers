#include<iostream>
using namespace std;
int n, totalsum = 1, result;
int sum = 0;




int fsum(int n) {
	
	
	for (int i = 0; i < n; i++) {
		int array[] = {n};
		cin >> array[i];
		 sum= sum + array[i];
		 
		 
	}
	cout << sum<<endl;
	return  sum;

}
int tsum(int n) {
	 totalsum = ((n+2)*(n+1)) / 2;
	 cout << totalsum<<endl;
	 return totalsum;
}
int main() {
	
	
	cin >> n;
	int f;
	int t;

	f = fsum(n);
	t = tsum(n);
	

	result = t-f;
	cout <<"The missing number is the array is: "<< result;

	
	return 0;

}
