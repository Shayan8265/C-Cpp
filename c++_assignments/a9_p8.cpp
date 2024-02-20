/*
CH-230-A
a9_p8.cpp
Shayan Khan
skhan01@jacobs-university.de
*/
#include <iostream>
using namespace std;

// prototypes
void subtract_max(int arr[], int n);
void deallocate(int* ptr_1);

int  main(){
    //takling input for n
    int n, i;
    cin >> n;
    //using ptr_1 as my array
    //along with memory allocation
    int* ptr_1 = new int[n];
    if(ptr_1 == NULL){
        cout<< "Memory Allocation Failed!!" << endl;
    }
    for(i = 0; i < n; i++){
        //taking input for n elements for the array
        cin >> ptr_1[i];
    }
    subtract_max(ptr_1, n);
    //passed paremeter as array and
    //then printing all elements
    for(i = 1; i <= n; i++){
        cout <<"element "<< i <<" = " << ptr_1[i - 1];
        cout << endl;
    }
    //deallocating using delete [] 
    //as it is an array
    deallocate(ptr_1);
    return 0;
}

void subtract_max(int arr[], int n){
    int i, newal;
    //starting from the first number
    int max = arr[0];
    int num = 0;
    for(i=0; i<n; i++){
        //always replacing the previously
        //allocated num if a bigger number
        //is encountered
        if(arr[i] >= max){
            max = arr[i];
            num = i;
        }
    }
    for(i = 0; i < n; i++){
        //subtracting all numbers except
        //the largest from the largest number
        if(i != num){
            newal = max - arr[i];
        }
        max = newal;
    }
    //replacing largest value
    //with the subtracted largest value
    arr[num] = max;
    return;
}

void deallocate(int* ptr_1){
    //deallocating the array
    delete [] ptr_1;
    return;
}