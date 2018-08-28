#include <iostream>
using namespace std;

void quickSort(int Arr[],int first,int last){
    int i, j, pivot, temp;

    if(first < last){
        pivot = first;
        i = first;
        j = last;

        while(i < j){

            while(Arr[i] <= Arr[pivot] && i<last)
                i++;

            while(Arr[j]>Arr[pivot])
                j--;

            if( i < j){
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }

        temp = Arr[pivot];
        Arr[pivot] = Arr[j];
        Arr[j] = temp;
        quickSort(Arr,first,j-1);
        quickSort(Arr,j+1,last);

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

    printf("Order of Sorted elements: ");

    for(int j = 0 ; j < i ; j++)
        cout<<Arr[j]<<" ";

    return 0;
}