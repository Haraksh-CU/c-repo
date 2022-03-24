/*#include <iostream>
using namespace std;

int main() {
int amount;
int denomination;
cout << "Enter the amount: ";
cin >> amount;
cout << "Enter the note to know how many notes are there in the amount: ";
cin >> denomination;
if (amount == denomination) {
    cout << "there is only 1 note";
}
else if (denomination > amount) {
    cout << "there are ZERO notes of the denomination: " << denomination << " in amount: " << amount;
}
else {
    int notes = (amount / denomination);
    cout << "The total number of notes of the note " << denomination << " in the amount " << amount << " is: " << notes << " in " << amount;
}
return 0;
}*/
#include<iostream>

using namespace std;

int main()

{

 int token[5]; // Stores the token number generated for 5 visitors
// code here
    for(int i=0; i<5; i++){
        int a;
        cin>>a;
        token[i]=a%50;
    }
    for(int i=0; i<5; i++){
        cout<<token[i]<<" ";
    }
    cout << 48%50;
return 0;
}
