// Q1 A INSERTION AT BEGINNING
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, x;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[100];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Enter element to insert at beginning: ";
//    cin >> x;
//
//    for(int i = n; i > 0; i--)
//        arr[i] = arr[i-1];
//
//    arr[0] = x;
//    n++;
//
//    cout << "Array after insertion: ";
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//}


//Q1 B INSERTION AT END
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, x;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int *arr = new int[n+1];
//
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Enter element to insert at end: ";
//    cin >> x;
//
//    arr[n] = x;
//    n++;
//
//    cout << "Array after insertion: ";
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//
//    delete[] arr;
//}


//Q1 C INSERTION AT SPECIFIC POSITION
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, x, pos;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[100];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Enter position (0 to " << n << "): ";
//    cin >> pos;
//
//    if(pos < 0 || pos > n) {
//        cout << "Invalid Position";
//        return 0;
//    }
//
//    cout << "Enter element: ";
//    cin >> x;
//
//    for(int i = n; i > pos; i--)
//        arr[i] = arr[i-1];
//
//    arr[pos] = x;
//    n++;
//
//    cout << "Array after insertion: ";
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//}


//Q2 A LINEAR SEARCH
//#include <iostream>
//using namespace std;
//
//int LinearSearch(int arr[], int n, int s) {
//    for(int i = 0; i < n; i++) {
//        if(arr[i] == s)
//            return i;
//    }
//    return -1;
//}
//
//int main() {
//    int n, s;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Enter element to search: ";
//    cin >> s;
//
//    int index = LinearSearch(arr, n, s);
//
//    if(index != -1)
//        cout << "Element found at index: " << index;
//    else
//        cout << "Element not found";
//}

//2 b binary search
//#include <iostream>
//using namespace std;
//
//int BinarySearch(int arr[], int n, int x) {
//    int low = 0, high = n - 1;
//
//    while(low <= high) {
//        int mid = (low + high) / 2;
//
//        if(arr[mid] == x)
//            return mid;
//        else if(arr[mid] < x)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//    return -1;
//}
//
//int main() {
//    int n, x;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter sorted elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Enter element to search: ";
//    cin >> x;
//
//    int index = BinarySearch(arr, n, x);
//
//    if(index != -1)
//        cout << "Element found at index: " << index;
//    else
//        cout << "Element not found";
//}


//2b
//#include<iostream>
// using namespace std;
// int Get(int arr[], int n, int index) {
// if(index >= 0 && index < n)
// return arr[index];
//else {
//cout << "Invalid index!";
// return -1;
//    }
// }
// int main() {
//int arr[50], n, index;
// cout << "Enter number of elements: ";
//cin >> n;
// cout << "Enter array elements:\n";
// for(int i = 0; i < n; i++)
// cin >> arr[i];
// cout << "Enter index: ";
//cin >> index;
// int result = Get(arr, n, index);
// if(result != -1)
//cout << "Element at index " << index << " is: " << result;
//return 0;
// }


//
//#include <iostream>
//using namespace std;
//
//void Set(int arr[], int n, int index, int x) {
//    if(index >= 0 && index < n)
//        arr[index] = x;
//    else
//        cout << "Invalid index";
//}
//
//int main() {
//    int n, index, x;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Enter index: ";
//    cin >> index;
//
//    cout << "Enter new value: ";
//    cin >> x;
//
//    Set(arr, n, index, x);
//
//    cout << "Updated array: ";
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//}



//
//#include <iostream>
//using namespace std;
//
//int Max(int arr[], int n) {
//    int max = arr[0];
//    for(int i = 1; i < n; i++)
//        if(arr[i] > max)
//            max = arr[i];
//    return max;
//}
//
//int main() {
//    int n;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Maximum element: " << Max(arr, n);
//}
//


//
//#include <iostream>
//using namespace std;
//
//int Min(int arr[], int n) {
//    int min = arr[0];
//    for(int i = 1; i < n; i++)
//        if(arr[i] < min)
//            min = arr[i];
//    return min;
//}
//
//int main() {
//    int n;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    cout << "Minimum element: " << Min(arr, n);
//}
//


//
//#include <iostream>
//using namespace std;
//
//void Reverse(int arr[], int n) {
//    int i = 0, j = n - 1;
//    while(i < j) {
//        int temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//        i++;
//        j--;
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    Reverse(arr, n);
//
//    cout << "Reversed array: ";
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//}


//
//#include <iostream>
//using namespace std;
//
//void Shift(int arr[], int n) {
//    for(int i = 0; i < n-1; i++)
//        arr[i] = arr[i+1];
//    arr[n-1] = 0;
//}
//
//int main() {
//    int n;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    Shift(arr, n);
//
//    cout << "Array after shift: ";
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//}


//
//#include <iostream>
//using namespace std;
//
//void Rotate(int arr[], int n) {
//    int temp = arr[0];
//    for(int i = 0; i < n-1; i++)
//        arr[i] = arr[i+1];
//    arr[n-1] = temp;
//}
//
//int main() {
//    int n;
//    cout << "Enter size: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter elements: ";
//    for(int i = 0; i < n; i++)
//        cin >> arr[i];
//
//    Rotate(arr, n);
//
//    cout << "Array after rotation: ";
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//}




//PATTTERN PRINTING

//SIMPLE PYRAMID
//#include <iostream>
//using namespace std;
//int main(){
//    int n=5;
//    for(int i=1;i<=n;i++){
//        for(int s=1;s<=n-i;s++) cout<<" ";
//        for(int j=1;j<=i;j++) cout<<"*";
//        cout<<endl;
//    }
//}

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    cout << "\n1. Simple Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n2. Flipped Simple Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n3. Inverted Pyramid\n";
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n4. Flipped Inverted Pyramid\n";
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n5. Full Triangle\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n6. Inverted Triangle\n";
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n7. Half Diamond\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n8. Flipped Half Diamond\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n9. Diamond Pattern\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n10. Hourglass Pattern\n";
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }

    cout << "\n11. Number Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<i<<" ";
        cout<<endl;
    }

    cout << "\n12. Rotated Number Pyramid\n";
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<num++<<" ";
        cout<<endl;
    }

    cout << "\n13. Palindrome Triangle\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<j;
        for(int j=i-1;j>=1;j--) cout<<j;
        cout<<endl;
    }

    cout << "\n14. Alphabet Pyramid\n";
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    cout << "\n15. Continuous Alphabet Pyramid\n";
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    return 0;
}
