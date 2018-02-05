#include <iostream>
#include <iomanip>
#include "../testlib.h"
using namespace std;
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<1<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		int a = rnd.next(-10, 10);
		int b = rnd.next(-10, 10);
		f<<a<<endl<<b<<endl;

		f.close();
	}
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<2<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		int a = rnd.next(-100, 100);
		int b = rnd.next(-100, 100);
		f<<a<<endl<<b<<endl;

		f.close();
	}
}
