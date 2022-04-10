#include <iostream>
using namespace std;

int main() {
int x;
cout << "enter number you want to check: ";
cin >> x;
if (x>0) {
if (x%3==0&&x%7==0)  {
    cout << x << " is a multiple of both 3 and 7";
}
else if (x%3==0)  {
    cout << x << " is a multiple of 3";
}
else if (x%7==0) {
     cout << x << " is a multiple of 7";
}
else {
    cout << "it is not multiple of 3 or 7";
}

}
return 0;
}
