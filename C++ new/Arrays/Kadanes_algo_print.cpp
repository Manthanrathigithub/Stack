#include<iostream>
using namespace std;
int main()
{
    int max_sum=INT16_MIN;
    int sum=0;
    int start=0;
    int start_s=0;
    int end_s=0;
    int i=0;
    int A[]={-2,-3,4,-1,-2,1,5,-3};
    for(i=0;i<8;i++){
        sum+=A[i];
        if(sum==0) start=i;
        if(sum > max_sum) {
            max_sum=sum;
            start_s=start;
            end_s=i;
        
    }

    else if (sum<0) sum=0;
}

    cout<<max_sum<<"\n";
    for(int j=start_s;j<=end_s;j++){
        cout<<A[j]<<" ";
    }
}