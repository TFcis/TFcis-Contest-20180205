#include <iostream>
#include <iomanip>
#include "../testlib.h"
#define MAX 1000000000LL
using namespace std;
int main(int argc, char* argv[]) {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	registerGen(argc, argv, 1);
	for(int w=1; w<=10; w++) {
		cout<<w<<endl;
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<1<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);
		
		int N = rnd.next(5, 10);
		int K = rnd.next(1, N);
		int a[5];
		for(int q=0; q<5; q++) a[q] = rnd.next(-200, 200);
		f<<K<<endl;
		f<<a[0];
		for(int q=1; q<5; q++) f<<" "<<a[q];
		f<<endl;
		f<<N<<endl;
		for(int q=0; q<N; q++) {
			int x = rnd.next(-20, 20);
			long long sum = 0;
			for(int q=0; q<5; q++) {
				sum+=a[q];
				sum*=x;
			}
			long long b = rnd.next(-1000000000LL, 1000000000LL);
			f<<x<<" "<<sum+b<<endl;
		}
		
		f.close();
	}
	for(int w=1; w<=10; w++) {
		cout<<w<<endl;
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<2<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);
		
		int N = rnd.next(10, 100);
		int K = rnd.next(1, N);
		int a[5];
		for(int q=0; q<5; q++) a[q] = rnd.next(-200, 200);
		f<<K<<endl;
		f<<a[0];
		for(int q=1; q<5; q++) f<<" "<<a[q];
		f<<endl;
		f<<N<<endl;
		for(int q=0; q<N; q++) {
			int x = rnd.next(-20, 20);
			long long sum = 0;
			for(int q=0; q<5; q++) {
				sum+=a[q];
				sum*=x;
			}
			long long b = rnd.next(-1000000000LL, 1000000000LL);
			f<<x<<" "<<sum+b<<endl;
		}
		
		f.close();
	}
	for(int w=1; w<=10; w++) {
		cout<<w<<endl;
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<3<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);
		
		int N = rnd.next(100, 10000);
		int K = rnd.next(1, N);
		int a[5];
		for(int q=0; q<5; q++) a[q] = rnd.next(-200, 200);
		f<<K<<endl;
		f<<a[0];
		for(int q=1; q<5; q++) f<<" "<<a[q];
		f<<endl;
		f<<N<<endl;
		for(int q=0; q<N; q++) {
			int x = rnd.next(-20, 20);
			long long sum = 0;
			for(int q=0; q<5; q++) {
				sum+=a[q];
				sum*=x;
			}
			long long b = rnd.next(-1000000000LL, 1000000000LL);
			f<<x<<" "<<sum+b<<endl;
		}
		
		f.close();
	}
	for(int w=1; w<=20; w++) {
		cout<<w<<endl;
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<4<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);
		
		int N = rnd.next(10000, 1000000);
		int K = rnd.next(1, N);
		int a[5];
		for(int q=0; q<5; q++) a[q] = rnd.next(-200, 200);
		f<<K<<endl;
		f<<a[0];
		for(int q=1; q<5; q++) f<<" "<<a[q];
		f<<endl;
		f<<N<<endl;
		for(int q=0; q<N; q++) {
			int x = rnd.next(-20, 20);
			long long sum = 0;
			for(int q=0; q<5; q++) {
				sum+=a[q];
				sum*=x;
			}
			long long b = rnd.next(-1000000000LL, 1000000000LL);
			f<<x<<" "<<sum+b<<endl;
//			if(w==10&&x==-20&&(b>1000000000LL||b<-1000000000LL))cout<<b<<endl;
		}
		
		f.close();
	}
}
