#include<iostream>
#include<string> 
using namespace std;
template<class T>
class binary{
	public:
		T array[30];
		
		binary(T a[],int c){
			copy(a,a+c,array);
		}
	int  bs(string a[], int left, int right,string key){
		int mid;
		if(left>right) return (-1);
		else{
			mid=(left+right)/2;
			if(a[mid]==key) return mid;
			else if(a[mid]>key) return bs(a,left,mid-1,key);
			else return bs(a,mid+1,right,key);
		}	
	}
	
	int  bs(int a[], int left, int right,int key){
		int mid;
		if(left>right) return (-1);
		else{
			mid=(left+right)/2;
			if(a[mid]==key) return mid;
			else if(a[mid]>key) return bs(a,left,mid-1,key);
			else return bs(a,mid+1,right,key);
		}
	}
	
};
int main(){
	char c;
	int n,q,loop=0,iarray[30],isearch[30],box[30];
	string sarray[30],ssearch[30];
	cout<<"�p�Gn�Mq�ҿ�J0���ܵ{���N�|����"<<endl;
	while(n!=0||q!=0){
		cout<<"�п�Ji(���)�Ϊ�s(�r��):";
		cin>>c;
		cout<<"�п�Jn�Mq:";
		cin>>n>>q;
		
		
		if(c=='i'){
			cout<<"�п�J�}�C���e:"<<endl; 
			for(int i=0;i<n;i++){
				cin>>iarray[i];
			}
			binary<int>ie(iarray,n);
			cout<<"�п�J�n�d�ߪ����:\n"<<endl; 
			for(int j=0;j<q;j++){
				cin>>isearch[j];
				box[j]=ie.bs(iarray,0,n,isearch[j]);
			}
			for(int j=0;j<q;j++){
				cout<<box[j]<<endl;
			}
		}
		
		
		else if(c=='s'){
			cout<<"�п�J�}�C���e:"<<endl; 
			for(int i=0;i<n;i++){
				cin>>sarray[i];
			}
			binary<string>se(sarray,n);
			cout<<"�п�J�n�d�ߪ��r��:\n"<<endl;
			for(int j=0;j<q;j++){
				cin>>ssearch[j];
				box[j]=se.bs(sarray,0,n,ssearch[j]);
			}
			for(int j=0;j<q;j++){
				cout<<box[j]<<endl;
			}
		}
	}
}
