#include "iostream"

using namespace std;
int main(){
	int maxa=0;
	int maxb=0;
	int cot;
	int tempa, tempb;
	int ans=0;
	int n=0;
	int arra[20]={0};
	int arrb[20]={0};
	cin>>cot;
	
	for(int i=0;i<cot;i++){
		cin>> arra[i];
	}
	for(int i=0;i<cot;i++){
		cin>> arrb[i];
	}
	for(int i=0;i<cot;i++){
	
	for(int i=0;i<cot;i++){
		if(arra[i]>maxa)
		{
			maxa=arra[i];
			tempa=i;
		}
	}
for(int i=0;i<cot;i++){

		if(arrb[i]>maxb)
		{
			maxb=arrb[i];
			tempb=i;
		}
	}
	if(maxa>maxb){
		ans++
		arra[tempa]=0;
		arrb[tempb]=0;
	}
	else{
	
	arrb[tempb]=0;
}
}
cout<<ans;
	return 0;
}
