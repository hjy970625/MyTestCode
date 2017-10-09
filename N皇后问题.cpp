#include <iostream>
#include <cmath>
#define N 4

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cnt=0;

void queen(int *a,int n,int cur){
	if(cur==n+1){
		cnt++;
	}else{
		for(int i=1;i<=n;i++){
			bool flag=true;
			for(int j=1;j<cur;j++){
				if(a[j]==i||(cur-j)==fabs(a[j]-i)){
					flag=false;
					break;
				}
			}
			if(flag){
				a[cur]=i;
				queen(a,n,cur+1);
			}
		}
	}
}

int main(int argc, char** argv) {
	int *a;
	int n;
	cin>>n;
	a=new int[n+1];
	queen(a,n,1);
	cout<<cnt;
}
