#include <iostream>
using namespace std;

int kittu(int oji[], int size , int key){
    int start = 0 ;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(key==oji[mid]){
            return mid;
        }
        if(key>oji[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid= (start+ end)/2;
    }
    return -1;
}
int main(){

    int oji[8] = {4,6,7,17,45,66,85,89};
    int dj[9] = {5,8,19,55,78,87,91,98,100};

    int rohan = kittu(oji,8,6);
    cout << "the entered key is at : " << rohan <<"\n";

    int heee = kittu(dj,9,109);
    cout << "the entered key is at : " << heee ;
}