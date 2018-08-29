#include <iostream>
using namespace std;

int leftArr[50],rightArr[50];
int l = 0,r = 0;

void quickSort(int Arr[],int pivot,int right) {

    for (int i = 1; i < right; ++i) {

        if (Arr[pivot] <= Arr[i])
            rightArr[r++] = Arr[i];

        else
            leftArr[l++] = Arr[i];

    }
    leftArr[l] = Arr[pivot];
}


void printArr(int Arr1[],int n){

   int  temp = 0;

    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < n - i -1 ; ++j) {

            if(Arr1[j] > Arr1[j+1]){

                temp = Arr1[j];
                Arr1[j] = Arr1[j+1];
                Arr1[j+1] = temp;
            }

        }

    }

    for (int k = 0; k < n; ++k) {

        cout<<Arr1[k]<<" ";
    }
}

int main(){

    int i = 0;
    int Arr[100],data;



    cout<<"Enter your data (-1) for end "<<endl;

    while(cin>>data) {

        if(data == -1)
            break;

        else
            Arr[i++] = data;
    }

    quickSort(Arr,0,i);

    printf("Sorted elements: ");

    printArr(leftArr,l+1);
    printArr(rightArr,r);



    return 0;
}