#include<iostream>
using namespace std;
class mn{
public:
int a[100];
int n=0;
void quantity(){
 cout<<"n = ";
 cin>>n;
}
void input(){
 cout<<"Enter mnozhina:";
 int b[n];
 for(int i=0;i<n;i++)
 cin>>b[i];
 int f=1;
 while(f!=0){
  f=0;
  for(int i=0;i<n-1;i++)
  	if(b[i]>b[i+1]){
   		swap(b[i],b[i+1]);
   		f=1;
  	}
  }
 int c[n];
 int nn=0;
 for(int i=0;i<n;i++)
 	c[i]=0;
 for(int i=0;i<n;i++){
  int p=0;
  for(int j=0;j<nn;j++)
  	if(b[i]==c[j])
  		p++;
  if(p==0){
   c[nn]=b[i];
   nn++;
  }
 }
 for(int i=0;i<nn;i++)
 	a[i]=c[i];
 n=nn;
}
};
class Sett:public mn{
public:

void include(){
int x;
cout<<"Enter new element of set\n";
cout<<"X = ";
cin>>x;
int c=0;
for(int i=0;i<n;i++)
	if(a[i]==x)
		c++;
	if(c==0){
		n++;
		a[n-1]=x;
		int f=1;
		while(f!=0){
			f=0;
			for(int i=0;i<n-1;i++)
				if(a[i]>a[i+1]){
					swap(a[i],a[i+1]);
					f=1;
				}
			}
		}
}

int main(){
cout<<
return 0;
}