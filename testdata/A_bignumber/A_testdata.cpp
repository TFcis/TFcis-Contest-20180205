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

		int a = rnd.next(0, 9);
		int b = rnd.next(0, 9);
		f<<hex<<uppercase<<a<<endl<<b<<endl;

		f.close();
	}
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<2<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		int a = rnd.next(1, INT_MAX);
		int b = rnd.next(1, INT_MAX);
		f<<hex<<uppercase<<a<<endl<<b<<endl;

		f.close();
	}
	for(int w=1; w<=20; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<3<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		int a = rnd.next(100, 10000);
		int b = a;
		f<<hex<<uppercase;
		f<<rnd.next(1, 15);
		for(int e=1; e<a; e++) {
			f<<rnd.next(0, 15);
		}
		f<<endl;
		f<<rnd.next(1, 15);
		for(int e=1; e<b; e++) {
			f<<rnd.next(0, 15);
		}
		f<<endl;

		f.close();
	}
	for(int w=1; w<=19; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<4<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		int a = rnd.next(100, 10000);
		int b = rnd.next(100, 10000);
		f<<hex<<uppercase;
		f<<rnd.next(1, 15);
		for(int e=1; e<a; e++) {
			f<<rnd.next(0, 15);
		}
		f<<endl;
		f<<rnd.next(1, 15);
		for(int e=1; e<b; e++) {
			f<<rnd.next(0, 15);
		}
		f<<endl;

		f.close();
	}
	for(int w=20; w<=20; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<4<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		f<<87<<endl<<87<<endl;

		f.close();
	}
}
