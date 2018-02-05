#include<bits/stdc++.h>
using namespace std;
int main(){
	char hexa[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

	string a,b;
	cin>>a>>b;
	int maxi = max(a.length(),b.length());
	char k1[maxi] ,k2[maxi] ,k3[maxi];
	memset(k1,'0',maxi);
	memset(k2,'0',maxi);
	for(int i=0;i<a.length();i++){
		k1[maxi - a.length() + i] = a[i];
	}
	for(int i=0;i<b.length();i++){
		k2[maxi - b.length() + i] = b[i];
	}
	for(int i = 0 ; i< maxi ; i++){
		int na,nb;
		for(int j = 0 ; j <16 ; j++){
			if(k1[i] == hexa[j]){
				na = j;
			}
		}
		for(int j = 0 ; j <16 ; j++){
			if(k2[i] == hexa[j]){
				nb = j;
			}
		}
		cout<<hexa[na^nb];
	}
	
} 
