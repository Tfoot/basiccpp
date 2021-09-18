#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n,int t){
    if(t==1){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    } 
    else{
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    }
}

int main(){
int n,t;
cout<<"Enter the Number of elements you want to enter: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"Enter "<<i+1<<" value: ";
    cin>>arr[i];
}
while(1){

cout<<"How do you want to sort the array\n";
cout<<"1. Ascending order\n";
cout<<"2. Descending order\n";
cout<<"3. Exit\n";
cout<<"Enter :\n";
cin>>t;
switch (t)
{//ascending order
case 1:
    bubble_sort(arr,n,t);
cout<<"Array sorted!"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl<<endl;
    break;

    //descending order
case 2:
bubble_sort(arr,n,t);
cout<<"Array sorted!"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl<<endl;
break;
case 3:
goto end;
break;
default:
cout<<"Enter valid value\n";
    break;
}


}

end:

cout<<"Program completed!";

    return 0;
}