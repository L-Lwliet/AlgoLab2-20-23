#include<iostream>
using namespace std;

int Partition(int A[], int p, int r){
    int x = A[r];
    int i = p -1;
    for(int j=p; j<= r-1; j++){
        if(A[j] <= x){
            i+=1;
            swap(A[i], A[j]);
        }
    }

    swap(A[i+1], A[r]);

    return (i+1);
}

void Quicksort(int A[], int p, int r){
    if(p<r){
        int q = Partition(A, p, r);
        Quicksort(A, p, q-1);
        Quicksort(A, q+1, r);
    }
}

int main(){
    int n, i;
    cout<<"Enter number of elements you want to input: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    int In[n];
    for(i=0; i<n; i++){
        cin>>In[i];
    }

    int s = sizeof(In)/sizeof(In[0]);
    Quicksort(In, 0, s-1);

    cout<<"The sorted array is: "<<endl;
    for(int i=0; i<s; i++){
        cout<<In[i]<<" ";
    }
    return 0;
}
