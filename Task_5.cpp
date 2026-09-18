#include <cassert>
#include <iostream>
using namespace std;

bool IsSorted(int *arr,int size) {  
    if (size==0){
        return false;
    }
    for (int i=0;i<size-1;i++) {
    if (arr[i]>arr[i+1]){
        return false;
    }
    }
    return true;
}


void testSortedArray() { 
int arr[] = {1, 2, 3, 4, 5};
bool result = IsSorted(arr, 5);
assert(result == true);
cout<<"Sorted Array test passed.\n";
}

void testUnsortedArray() { 
    int arr[] = {5,8,7,3,1};
    bool result = IsSorted(arr, 5);
    assert(result == false);
    cout<<"UnSorted Array test passed.\n";
}

void testDuplicatedArray() { 
int arr[] = {1, 2, 2, 4, 5};
bool result = IsSorted(arr, 5);
assert(result == true);
cout<<"Duplicated Array test passed.\n";
}


void testSingleElement() { 
int arr[] = {1};
bool result = IsSorted(arr, 1);
assert(result == true);
cout<<"Single Element test passed.\n";
}


void testDescendingArray() { 
int arr[] = {5,4,3,2,1};
bool result = IsSorted(arr, 5);
assert(result == false);
cout<<"Descending Array test passed.\n";
}


void testNegativeArray() { int arr[] = {-3,-2,-1,-9,-8};
bool result = IsSorted(arr, 5);
assert(result == false);
cout<<"Negative Array test passed.\n";
}

void testEmptyArray() { int arr[] = {};
bool result = IsSorted(arr, 0);
assert(result == false);
cout<<"Empty Array test passed.\n";
}

void testEqualArray() { int arr[] = {1,1,1};
bool result = IsSorted(arr, 3);
assert(result == true);
cout<<"Equal Array test passed.\n";
}
int main(){  

    testSortedArray();
    testUnsortedArray();
    testDuplicatedArray();
    testSingleElement();
    testDescendingArray();
    testNegativeArray();
    testEqualArray();
    testEmptyArray(); 
    
    

}
