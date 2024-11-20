#include<iostream>
using namespace std;


int it=1;
int partition(int arr[], int low, int high) {
   
    // Initialize pivot to be the first element
    int p = arr[low];
    int i = low;
    int j = high;
cout<<"pivot = "<<p<<endl;
    while (i < j) {

        // Find the first element greater than
        // the pivot (from starting)
        while (arr[i] <= p && i <= high - 1) {
            i++;
        }

        // Find the first element smaller than
        // the pivot (from last)
        while (arr[j] > p && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
  

     cout<<"after "<<it<<" iteration ";
     for(int i=0;i<7;i++){
	 
    cout<<arr[i]<<" ";
    }
	     it++;
	cout<<endl;
    return j;
   
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {

        // call partition function to find Partition Index
        int pi = partition(arr, low, high);

        // Recursively call quickSort() for left and right
        // half based on Partition Index
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
  
    int arr[7] = {1,4,10,7,3,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // calling quickSort() to sort the given array
    quickSort(arr, 0, n - 1);
	int arr2[7];
	for (int i=0;i<7;i++)
	{
		arr2[i]=arr[6-i];
	}
    for (int i = 0; i < n; i++)
        cout<<" "<< arr2[i];

    return 0;
}
