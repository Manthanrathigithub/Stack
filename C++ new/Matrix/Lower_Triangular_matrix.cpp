#include<iostream>
using namespace std;
struct LowerTri{
private:
int *A;
int n;
public:
LowerTri(){
    n=2;
    A=new int [2*(2+1)/2];
}
LowerTri(int n){
    this ->n=n;
    A=new int [n*(n+1)/2];
    
}
~LowerTri(){
    delete[] A;
}
void set(int i,int j,int x){
    if (i>=j) {
        A[(i * (i-1)) /2 + j -1]=x;
    }
}
int get(int i,int j){
    if (i>=j) {
        return A[(i * (i-1)) /2 + j-1];
    }
    else return 0;

}
void Display(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i>=j) cout<<A[(i * (i-1)) /2  + j -1]<<" ";
            else cout<<" 0 ";
        }
        cout<<endl;
    }
}
};
int main()
{
   
   int d;
   cout<<"Enter dimension"<<endl;
   cin>>d;
    LowerTri lm  (d);
int x;
   for (int i=1;i<=d;i++){
      for (int j=1;j<=d;j++){
        cin>>x;
        lm.set(i,j,x);
      }
   }
  cout<< lm.get(1,1);
   lm.Display();
}