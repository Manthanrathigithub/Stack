#include<iostream>
using namespace std;
struct Upper{
    private:
    int n;
    int *A;
    public:
    Upper(){
         n=3;
        A=new int [(3*4)/2];
    }
    Upper(int n){
        this->n=n;
        A=new int [(n*n+1)/2];
    }
    ~Upper(){
        delete[]A;
    }
    void Set(int i,int j,int x){
        if (i<=j){
            A[(((i-1)*n) - ((i-1)*(i-2))/2 ) +j-i]=x;
        }
    }
    int Get(int i,int j){
        if (j>=i){
            return  A[(((i-1)*n) - ((i-1)*(i-2))/2 ) +j-i];
        }
        else {
            return 0;
        }
    }
    void display(){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (i<=j){
                cout<< A[(((i-1)*n) - ((i-1)*(i-2))/2 ) +j-i]<<" ";
                }
                else {
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
};
int main(){
   
    int d;
    cin>>d;
    Upper up(d);
    int x;
    for (int i=1;i<=d;i++){
        for (int j=1;j<=d;j++){
            cin>>x;
            up.Set(i,j,x);
        }
    }
    up.display();
}