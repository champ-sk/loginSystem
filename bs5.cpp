//first and last occurence
#include <iostream>
using namespace std;

int lastOccurence(int a[],int size, int target){
    int start=0,end= size-1;
    int res=-1;
    while(start<=end){
        int mid= start+(end-start)/2;
        if(a[mid]==target){
            //move right
            res=mid;
            start= mid+1;
        }
        else if(a[mid]<target) start= mid+1;
        else end= mid-1;
    }
    return res;
}
int firstOccurence(int a[],int size,int target){
    int start=0,end=size-1;
    int res=-1;
    while(start<=end){
        int mid= start+ (end-start)/2;
        if(a[mid]==target){
            //move left to find first occurence
            res= mid;
            end=mid-1;
        }
        else if(a[mid]> target) end=mid-1;
        else start= mid+1;
    }
    return res;
}
int main(){
    // int a[]= {2,4,10,10,10,18,20};
    int a[]= {0,0,0,0,1,1,1,1,1,1};
    cout<< "first occurence: "<< firstOccurence(a,7,1) << endl;
    cout << "last occrence: " << lastOccurence(a,7,1) << endl;
}