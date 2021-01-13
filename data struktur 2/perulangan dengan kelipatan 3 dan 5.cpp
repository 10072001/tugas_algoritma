#include <iostream>
using namespace std;
int a;
int main(){
	cout<<"masukan angka : ";
	cin>>a;
    for(int i = 1; i <= a; i++){
    	
        if((i%3!=0) && (i%5!=0))
		{
		cout<<i<<endl;
		}
        if(i%3==0)
		{
        cout<<"upin"<<endl;
		}
		if(i%5==0)
		{
        	cout<<"ipin"<<endl;
		}
    }
    return 0;
}
