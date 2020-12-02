#include <iostream>
using namespace std;
int main()
{
	int d[4][4][2] = { {1,2,3,4}, {5,6,7,8},{9,10} };
	int e[4][4][2] = { {1,2,3,4}, {5,6,7,8},{9,10} };
	int f[4][4][2];
	
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++)
		for(int z = 0; z < 2; z++){
			f[x][y][z] = d[x][y][z] + e[x][y][z];
		}
	}
	for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++)
		for(int z = 0; z < 2; z++){
			cout << f[x][y][z] << " ";
		}
			cout << endl;
	}
	
}
