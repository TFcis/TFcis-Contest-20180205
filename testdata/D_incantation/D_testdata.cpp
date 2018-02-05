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

		stringstream s;
		string start = "", end = "";
		while(start == end) {
			start = rnd.next("[A-Z]{3}");
			end = rnd.next("[A-Z]{3}");
		}
		s<<start;
		f<<start;
		s<<end;
		f<<end;
		int maxlen = rnd.next(100, 9990);
		cout<<maxlen<<endl;
		while(true) {
			int t = rnd.next(0, 10);
			string temp;
			if(t==0) {
				temp=start;
			} else if(t==1) {
				temp=end;
			} else {
				temp=rnd.next("[A-Z]");
			}
			s<<temp;
			if(s.str().size()>maxlen) break;
			f<<temp;
		}
		f<<endl;
		
		f.close();
	}
	for(int w=1; w<=10; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<2<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		stringstream s;
		string start = "", end = "";
		while(start == end) {
			start = rnd.next("[A-Z]{3}");
			end = rnd.next("[A-Z]{3}");
		}
		s<<start;
		f<<start;
		s<<end;
		f<<end;
		int maxlen = rnd.next(100, 9990);
		cout<<maxlen<<endl;
		while(true) {
			int t = rnd.next(0, 10);
			string temp;
			if(t==0) {
				temp=start[0];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(2, 9);
					temp+=to_string(tt);
				}
				temp+=start[1];
				temp+=start[2];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(2, 9);
					temp+=to_string(tt);
				}
			} else if(t==1) {
				temp=end[0];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(2, 9);
					temp+=to_string(tt);
				}
				temp+=end[1];
				temp+=end[2];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(2, 9);
					temp+=to_string(tt);
				}
			} else {
				temp=rnd.next("[A-Z]");
				if(rnd.next(0, 5)==0) {
					int tt=rnd.next(2, 9);
					temp+=to_string(tt);
				}
			}
			s<<temp;
			if(s.str().size()>maxlen) break;
			f<<temp;
		}
		f<<endl;
		
		f.close();
	}
	for(int w=1; w<=20; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<3<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		stringstream s;
		string start = "", end = "";
		while(start == end) {
			start = rnd.next("[A-Z]{3}");
			end = rnd.next("[A-Z]{3}");
		}
		s<<start;
		f<<start;
		s<<end;
		f<<end;
		int maxlen = rnd.next(100, 9990);
		cout<<maxlen<<endl;
		while(true) {
			int t = rnd.next(0, 10);
			string temp;
			if(t==0) {
				temp=start[0];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(0, 2);
					int t2=pow(10, tt);
					int t3=pow(10, tt+1);
					int t4=rnd.next(t2, t3);
					temp+=to_string(t4);
				}
				temp+=start[1];
				temp+=start[2];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(0, 2);
					int t2=pow(10, tt);
					int t3=pow(10, tt+1);
					int t4=rnd.next(t2, t3);
					temp+=to_string(t4);
				}
			} else if(t==1) {
				temp=end[0];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(0, 2);
					int t2=pow(10, tt);
					int t3=pow(10, tt+1);
					int t4=rnd.next(t2, t3);
					temp+=to_string(t4);
				}
				temp+=end[1];
				temp+=end[2];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(0, 2);
					int t2=pow(10, tt);
					int t3=pow(10, tt+1);
					int t4=rnd.next(t2, t3);
					temp+=to_string(t4);
				}
			} else {
				temp=rnd.next("[A-Z]");
				if(rnd.next(0, 5)==0) {
					int tt=rnd.next(0, 2);
					int t2=pow(10, tt);
					int t3=pow(10, tt+1);
					int t4=rnd.next(t2, t3);
					temp+=to_string(t4);
				}
			}
			s<<temp;
			if(s.str().size()>maxlen) break;
			f<<temp;
		}
		f<<endl;
		
		f.close();
	}
	for(int w=1; w<=5; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<4<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		string start = "", end = "";
		while(start == end) {
			start = rnd.next("[A-Z]{3}");
			end = rnd.next("[A-Z]{3}");
		}
		f<<start;
		f<<end;
		int maxlen = rnd.next(100, 9990);
		cout<<maxlen<<endl;
		f<<rnd.next("[A-Z]");
		int tt=rnd.next(7, 8);
		string t4=rnd.next("[1-9][0-9]{"+to_string(tt)+"}");
		f<<t4;
		f<<endl;

		f.close();
	}
	for(int w=1; w<=5; w++) {
		stringstream ss;
		ss<<"data/"<<setfill('0')<<setw(2)<<5<<setw(2)<<w<<".in";
		fstream f;
		f.open(ss.str().c_str(), ios::binary|ios::out);

		stringstream s;
		string start = "", end = "";
		while(start == end) {
			start = rnd.next("[A-Z]{3}");
			end = rnd.next("[A-Z]{3}");
		}
		s<<start;
		f<<start;
		s<<end;
		f<<end;
		int maxlen = rnd.next(100, 9990);
		cout<<maxlen<<endl;
		while(true) {
			int t = rnd.next(0, 10);
			string temp;
			if(t==0) {
				temp=start[0];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(0, 100);
					string t4=rnd.next("[1-9][0-9]{"+to_string(tt)+"}");
					temp+=t4;
				}
				temp+=start[1];
				temp+=start[2];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(0, 100);
					string t4=rnd.next("[1-9][0-9]{"+to_string(tt)+"}");
					temp+=t4;
				}
			} else if(t==1) {
				temp=end[0];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(0, 100);
					string t4=rnd.next("[1-9][0-9]{"+to_string(tt)+"}");
					temp+=t4;
				}
				temp+=end[1];
				temp+=end[2];
				if(rnd.next(0, 3)==0) {
					int tt=rnd.next(0, 100);
					string t4=rnd.next("[1-9][0-9]{"+to_string(tt)+"}");
					temp+=t4;
				}
			} else {
				temp=rnd.next("[A-Z]");
				if(rnd.next(0, 5)==0) {
					int tt=rnd.next(0, 100);
					string t4=rnd.next("[1-9][0-9]{"+to_string(tt)+"}");
					temp+=t4;
				}
			}
			s<<temp;
			if(s.str().size()>maxlen) break;
			f<<temp;
		}
		f<<endl;

		f.close();
	}
}
