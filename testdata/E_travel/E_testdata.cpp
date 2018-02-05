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

		int H = 1;
		int W = 1;
		while(H == 1 && W == 1) {
			H = rnd.next(1, 5);
			W = rnd.next(1, 5);
		}
		int X = 1;
		int Y = 1;
		while(X == 1 && Y == 1) {
			X = rnd.next(1, H);
			Y = rnd.next(1, W);
		}
		f<<H<<" "<<W<<" "<<X<<" "<<Y<<endl;
		for(int q=0; q<H; q++) {
			f<<rnd.next(-1000, 1000);
			for(int w=1; w<W; w++) {
				f<<" "<<rnd.next(-1000, 1000);
			}
			f<<endl;
		}
		
		f.close();
	}
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<2<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		int H = 1;
		int W = 1;
		while(H == 1 && W == 1) {
			H = rnd.next(6, 10);
			W = rnd.next(6, 10);
		}
		int X = 1;
		int Y = 1;
		while(X == 1 && Y == 1) {
			X = rnd.next(1, H);
			Y = rnd.next(1, W);
		}
		f<<H<<" "<<W<<" "<<X<<" "<<Y<<endl;
		for(int q=0; q<H; q++) {
			f<<rnd.next(-1000, 1000);
			for(int w=1; w<W; w++) {
				f<<" "<<rnd.next(-1000, 1000);
			}
			f<<endl;
		}
		
		f.close();
	}
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<3<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		int H = 1;
		int W = 1;
		while(H == 1 && W == 1) {
			H = rnd.next(11, 15);
			W = rnd.next(11, 15);
		}
		int X = 1;
		int Y = 1;
		while(X == 1 && Y == 1) {
			X = rnd.next(1, H);
			Y = rnd.next(1, W);
		}
		f<<H<<" "<<W<<" "<<X<<" "<<Y<<endl;
		for(int q=0; q<H; q++) {
			f<<rnd.next(-1000, 1000);
			for(int w=1; w<W; w++) {
				f<<" "<<rnd.next(-1000, 1000);
			}
			f<<endl;
		}
		
		f.close();
	}
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<4<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		int H = 1;
		int W = 1;
		while(H == 1 && W == 1) {
			H = rnd.next(16, 20);
			W = rnd.next(16, 20);
		}
		int X = 1;
		int Y = 1;
		while(X == 1 && Y == 1) {
			X = rnd.next(1, H);
			Y = rnd.next(1, W);
		}
		f<<H<<" "<<W<<" "<<X<<" "<<Y<<endl;
		for(int q=0; q<H; q++) {
			f<<rnd.next(-1000, 1000);
			for(int w=1; w<W; w++) {
				f<<" "<<rnd.next(-1000, 1000);
			}
			f<<endl;
		}
		
		f.close();
	}
}
