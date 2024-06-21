#include <iostream>
int findMax(int arr[],int size);
int main(){
    int numbers[]={23,45,67,12,89,34};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int maxVal=findMax(numbers,size);
    std::cout<<"The maximum value in the array is: "<<maxVal<<std::endl;
    return 0;
}
int findMax(int arr[],int size){
    int maxVal=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    return maxVal;
}
