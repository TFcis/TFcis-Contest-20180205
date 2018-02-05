#include <iostream>
#include <iomanip>
#include "../testlib.h"
#define MAX 4294967295LL
using namespace std;
string roman(long long n) {
	string s="";
	for(char c='A'; n>0&&c<='Z'; c++) { 
		if(n&1) s+=c;
		n>>=1;
	}
	for(char c='a'; n>0&&c<='z'; c++) {
		if(n&1) s+=c;
		n>>=1;
	}
	return s;
}
int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<1<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		long long a = rnd.next(1LL, MAX);
		f<<a<<endl;

		f.close();
	}
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<2<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		long long a = rnd.next(1LL, MAX);
		f<<roman(a)<<endl;

		f.close();
	}
	for(int w=1; w<=30; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<3<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		long long a = rnd.next(1LL, MAX);
		if(rnd.next(0, 1)) {
			f<<a<<endl;
		} else {
			f<<roman(a)<<endl;
		}

		f.close();
	}
}
