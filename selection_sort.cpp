#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& arr , int s){
    for(int i = 0; i < s - 1; i++){
        int minidx = i;
        for(int j = i + 1; j < s; j++){
            if(arr[minidx] > arr[j]){
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }

}
// 找到最小element，把它放到第一個，再看剩下的element重複做
void printArr(vector<int> arr){
    for(int i: arr){
        cout << i << " ";
    }
    cout << endl;
}

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
    selection_sort(arr, quantity);
    cout << "After selection sort:";
    printArr(arr);
    system("pause");
    return 0;
}