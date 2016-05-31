#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

void dh(int);
unsigned long pwrred(int, int, int);

int main(int argc, char *argv[])
{
	unsigned long k = atoi(argv[1]);
	dh(k);

	return 0;
}

void dh(int k){
	unsigned long g, p, gk, gl, glk;
//	cout << "p g g^lmodp: ";
	cin >> p >> g >> gl;

	gk = pwrred(g, k, p);
	glk = pwrred(gl, k, p);
	cerr << glk << endl;
	cout << p << " " << g << " " << gk << endl;
}

unsigned long pwrred(int g, int e, int p){
	unsigned long sum = g;
	for (int i = e - 1; i > 0; i--){
		sum = (sum * g) % p;
	}
	return sum;
}
