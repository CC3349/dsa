#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i=0;i<n-1;i++)
        if(arr[i] > arr[i+1])
            return false;
    return true;
}

void Union(int a[], int b[], int n1, int n2) {
    cout << "\nUnion: ";
    for(int i=0;i<n1;i++)
        cout<<a[i]<<" ";

    for(int i=0;i<n2;i++){
        bool found=false;
        for(int j=0;j<n1;j++){
            if(b[i]==a[j]){
                found=true;
                break;
            }
        }
        if(!found)
            cout<<b[i]<<" ";
    }
    cout<<endl;
}

void Intersection(int a[], int b[], int n1, int n2) {
    cout << "\nIntersection: ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
}

void duplicateSorted(int arr[], int n) {
    cout << "\nDuplicates (Sorted): ";
    bool found=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
            found=true;
        }
    }
    if(!found) cout<<"No duplicates";
    cout<<endl;
}

void duplicateUnsorted(int arr[], int n) {
    cout << "Duplicates (Unsorted): ";
    bool found=false;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count>1){
            cout<<arr[i]<<" ";
            found=true;
        }
    }
    if(!found) cout<<"No duplicate elements are there.";
    cout<<endl;
}

void pairSum(int arr[], int n, int k) {
    cout<<"Pairs with sum "<<k<<": ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k)
                cout<<"("<<arr[i]<<","<<arr[j]<<") ";
        }
    }
    cout<<endl;
}

void maxMin(int arr[], int n){
    int max=arr[0], min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    cout<<"\nIn the array: { ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<"}Max = "<<max<<"\nMin = "<<min<<endl;
}

int main() {
    int a[100], b[100], c[100];
    int n1,n2,n3,k;

    cout<<"Enter the number of elements for the first array: ";
    cin>>n1;
    cout<<"Enter the elements : ";
    for(int i=0;i<n1;i++) cin>>a[i];

    if(isSorted(a,n1))
        cout<<"Checking for Sorting : The given array is sorted.\n";
    else
        cout<<"Checking for Sorting : The given array is not sorted.\n";

    cout<<"Enter the number of elements for 2nd array: ";
    cin>>n2;
    cout<<"Enter the elements : ";
    for(int i=0;i<n2;i++) cin>>b[i];

    Union(a,b,n1,n2);
    Intersection(a,b,n1,n2);

    duplicateSorted(a,n1);

    cout<<"\nEnter the number of elements : ";
    cin>>n3;
    cout<<"Enter the elements : ";
    for(int i=0;i<n3;i++) cin>>c[i];

    cout<<"\nIn the given unsorted array: { ";
    for(int i=0;i<n3;i++) cout<<c[i]<<" ";
    cout<<"}";
    duplicateUnsorted(c,n3);

    cout<<"\nEnter k: ";
    cin>>k;
    pairSum(c,n3,k);

    if(!isSorted(c,n3))
        cout<<"Array is not sorted. Pair sum not possible.\n";

    maxMin(a,n1);

    return 0;
}
