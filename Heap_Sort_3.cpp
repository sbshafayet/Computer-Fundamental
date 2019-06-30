
#include <iostream>
using namespace std;
int arr[]={1,12,9,5,6,10};
int length=sizeof(arr)/sizeof(arr[0]);
void display(){
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void heapify(int n, int index){
   int largest = index;
   int l = 2*index + 1;
   int r = 2*index + 2;
   if (l < n && arr[l] > arr[largest])
     largest = l;
   if (r < n && arr[r] > arr[largest])
     largest = r;
   if (largest != index){
     swap(arr[index], arr[largest]);
     heapify(n, largest);
   }
}
void heapSort(){
   // Heap sort
   for (int i=length-1; i>=1; i--){
     swap(arr[0], arr[i]);
     heapify( i, 0);
   }
}
void buildHeap(){
   for (int i=length/2; i >= 0; i--)
     heapify(length, i);
}
int main() {
    cout << "\nYour Data : ";
    display();
    buildHeap();
    cout <<"\nSorted Data : ";
    heapSort();
    display();
    return 0;
}

