#include <iostream>
using namespace std;

void quickSort(int Arr[],int left,int right) {

    int i, j, pivot, temp;

    if (left < right) {

        pivot = left;
        i = left;
        j = right;

        while (i < j) {

            while (Arr[i] <= Arr[pivot] && i < right)
                i++;

            while (Arr[j] > Arr[pivot])
                j--;

            if (i < j) {
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }

        }
            temp = Arr[pivot];
            Arr[pivot] = Arr[j];
            Arr[j] = temp;

            quickSort(Arr, left, j - 1);
            quickSort(Arr, j + 1, right);


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
    quickSort(Arr,0,i-1);

    printf("Sorted elements: ");

    for(int j = 0 ; j < i ; j++)
        cout<<Arr[j]<<" ";

    return 0;
}