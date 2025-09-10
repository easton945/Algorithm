#include <iostream>
#include <vector>

using namespace std;

void insertion_sort_swap(vector<int>& arr , int s){
    for(int i = 0; i < s; i++){
        int j = i - 1;
        while(j >= 0 && arr[j] > arr[j + 1]){
            int temp = arr [j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
//4 5 3 2 1 -> 4 3 5 2 1 -> 3 4 5 2 1
void printArr(vector<int> arr){
    for(int i: arr){
        cout << i << " ";
    }
    cout << endl;
}
void insertion_sort_key(vector<int>& arr, int s){
    for(int i = 1; i < s; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
//4 5 3 2 1 -> 4 5 5 2 1 -> 3 4 5 2 1
//從第二個開始看，若是比前面小就往前移動
int main(){
    vector<int>arr;
    int quantity;
    cout << "Enter how many numbers you want in an array:";
    cin >> quantity;
    cout << "Enter the numbers" << endl;
    for(int i = 0; i < quantity; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << "Original array:";
    printArr(arr);
    insertion_sort_key(arr, quantity);
    cout << "After insertion sort:";
    printArr(arr);
    return 0;
}