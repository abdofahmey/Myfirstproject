#include<iostream>
#include<cstdlib>
using namespace std;
int random(int from, int to){
    return rand() % (to - from + 1) + from;
}

void fillArray(int array[], int &arraylength){
    cout << " enter array length" << endl;
    cin >> arraylength;
    for(int i = 0; i < arraylength; i++){
        array[i] = random(1, 100);
    }
}
void fillArray2(int array2[100], int arraylength){
    for(int i = 0; i < arraylength; i++){
        array2[i] = random(1, 100);
    }
}

void fillArray3(int array3[100], int &arraylength, int array1[], int array2[]){


    for (int i = 0; i < arraylength; i++){
        array3[i] = array1[i] + array2[i];

    }
}
void printallArray(int array5[100], int arraylength){
    for(int i = 0; i < arraylength; i++){
        cout << array5[i] << " ";
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));
    int array[100]; int arraylength;
    fillArray(array, arraylength);
    int array2[100];
    fillArray2(array2, arraylength);
    int array3[100]; 
    fillArray3(array3, arraylength ,array, array2);
    cout << " array1: " << endl;
    printallArray(array, arraylength);
    cout << " array2: " << endl;
    printallArray(array2, arraylength);
    cout << " array3: " << endl;
    printallArray(array3, arraylength);
    return 0;
}