#include<stdio.h>
#include<iostream>
using namespace std;

#define Maxsize 100

template<class Type>
int BinarySearch(Type a[],const Type& x, int n){
	int left=0;
	int right=n-1;
	while(left<=right){
		int middle=(left+right)/2;
		if(x==a[middle])
		 return middle;
		if(x>a[middle])
		 left=middle+1;
		else
		 right=middle-1;
	}
	return-1;
} 
int main(){
	int a[Maxsize];
	int x,j,Length;
	cout<<"�������鳤��"<<endl;
	cin>>Length;
	cout<<"������ֵ"<<endl;
	for(int i=0;i<Length;i++)
	 cin>>a[i];
	cout<<"������Ҫ���ҵ���"<<endl;
	cin>>x;
	j=BinarySearch(a,x,Length);
	if(j!=-1){
		cout<<"�����ڵ�"<<j+1<<"λ"<<endl; 
	}
	else
	 cout<<"δ�ҵ�������"<<endl;
}
