#include <iostream>
#include <vector>
using namespace std;


int partition(vector<int>& arr, int low, int high) {
  
    // choose the pivot
    int pivot = arr[high];
  
    // undex of smaller element and indicates 
    // the right position of pivot found so far
    int i = low - 1;

    // Traverse arr[low..high] and move all smaller
    // elements on left side. Elements from low to 
    // i are smaller after every iteration
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    // move pivot after smaller elements and
    // return its position
    swap(arr[i + 1], arr[high]);  
    return i + 1;
}

// the QuickSort function implementation
void quickSort(vector<int>& arr, int low, int high) {
  
    if (low < high) {
      
        // pi is the partition return index of pivot
        int pi = partition(arr, low, high);

        // recursion calls for smaller elements
        // and greater or equals elements
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int arr(int nums[], int size , int key){
    int start = 0 ;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(key==nums[mid]){
            return mid;
        }
        if(key>nums[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid= (start+ end)/2;
    }
    return -1;
}
void bubblesort(){
    //
}
int main(){

    int nums[8] = {4,6,7,17,45,66,85,89};
    int dj[9] = {5,8,19,55,78,87,91,98,100};

    int num = arr(nums,8,6);
    cout << "the entered key is at : " << num <<"\n";
    vector<int> arr ;
    quickSort(arr,0,8) ;
}




// ki haal chal yau
// dusri baar comment file me kr rha hu desktop pe nhi