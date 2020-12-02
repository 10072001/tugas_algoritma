#include <iostream>
#include <string.h>
using namespace std;

int main() {

char y [100];
char z [100];

    cout<<"program polindrome"<<endl;
    cout<<"masukan kata : ";cin>>y;

    strcpy(z,y);
    strrev(z);

if(strcmp(y,z) == 0) {
cout<<"merupakan kata polindrome ,"<<z;
} else {
	cout<<"bukan merupakan kata polindrome, "<<z;
}
return 0;
}
