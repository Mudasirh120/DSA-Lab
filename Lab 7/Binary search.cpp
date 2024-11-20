#include <iostream>
using namespace std;
int main()
{
	int lower = 0, upper, size, target, index = -1, temp = 0;
	;
	cout << "Enter size of Array : ";
	cin >> size;
	int arr[size];
	upper = size - 1;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " value for Array : ";
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Current Array " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "Enter target to find : ";
	cin >> target;
	while (lower <= upper)
	{
		int mid = (lower + upper) / 2;
		if (arr[mid] == target)
		{
			index = mid;
		}
		else if (arr[mid] > target)
		{
			upper = mid - 1;
		}
		else
		{
			lower = mid + 1;
		}
		cout << "\nCurrent array = ";
		for (int i = lower; i <= upper; i++)
		{
			cout << arr[i] << "\t";
		}
	}
	if (index < 0)
	{
		cout << "\nTarget not found" << endl;
	}
	else
	{
		cout << "\nTarget found at index " << index << endl;
	}
}
