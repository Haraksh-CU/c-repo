#include <iostream>
using namespace std;

int main() {
int n;//length of series
int sum = 0;
cout << "series: (1*1)+(2*2)+(3*3)+(4*4)+(5*5)+ ... +(n*n)";
cout << "\n\nEnter the number to calculate the series: ";
cin >> n;
for (int i = 1; i <= n ; i++) {
    sum = sum + (i*i);
}
cout << "sum of the series is: " << sum;
return 0;
}
