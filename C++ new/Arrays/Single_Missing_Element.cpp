/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n]={1,2,3,4,5,6,7,9,10,11};
    int SUMN=(n*(n+1))/2;
    int sum=0;
    for (int i=0;i<10;i++){
        sum=sum + arr[i];
    }
    int miss=SUMN-sum;
     cout<<endl<<miss;
/*}
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n]={6,7,8,9,10,12,13,14};
    int low=6;
    int miss;
    int diff=low-0;
    for (int i=0;i<n;i++){
        if (diff!=array[i] - i){
            miss=i+diff;
            break;

        }

    }
    cout<<miss;
}