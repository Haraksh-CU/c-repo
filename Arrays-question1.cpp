#include <iostream>
using namespace std;

int main() {
int n;
int siz;
int arr[siz];
double sum=0;
cout << "Enter size of array: ";
cin >> siz;
cout << "Enter elements of array: ";
for (int i=0;i<siz;i++) {
    cin >> arr[i];
}
cout << "your array is: ";
for (int i=0;i<siz;i++) {
    cout << arr[i] << ", ";
    sum=sum+arr[i];
}
cout << "\nsum of array is: " << sum;
return 0;
}
