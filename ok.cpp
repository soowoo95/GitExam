#include "iostream"
using namespace std;
int main(){
	int a,b,c,temp,i=0,k=1;
	cin>>a;
	cin>>b;
	cin>>c;
	temp = a*b*c;
	do{
		k*=10;
		i++;
	}
	while(k<temp);
	cout<<i;
	int arr[i]={0};
	for(int j=0;j<i;j++){
		arr[j]=temp%10;
		temp=temp/10;
	}
	for(int j=0;j<10;j++){
		int m=0;
		for(int l=0;l<i;l++){
			if(j==arr[l]){
				m++;
			}
			
			}
			cout<<m<<endl;
	}
	}
