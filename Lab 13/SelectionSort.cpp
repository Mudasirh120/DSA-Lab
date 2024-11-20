#include <iostream>
using namespace std;
// Function to perform Selection Sort
void SelectionSort(int arr[], int n) 
{
   
}
int main() {
            int it=0;
  int n=5;
    int arr[n]={7,2,5,3,4};
   
     int i, j, min, temp;
    // Loop through each element in the array
    for (i = 0; i < n ; i++)
    {
        min = i; 
        for (j = i ; j < n; j++) 
        {
            if (arr[j] > arr[min]) 
            {  
                min = j; 
            }
        }

        cout<<it<<" iteration "<<endl;
     for(int o=0;o<5;o++){
		
        cout<<arr[o]<<" ";
    }
    cout<<endl;
    it++;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
   }
    cout << "Sorted Array after Selection Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
