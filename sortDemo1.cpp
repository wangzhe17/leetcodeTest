#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;
class Code_00_BubleSort
{
public:
	static void bubleSort(vector<int> &arr)
	{
		if (arr.empty() || arr.size() < 2)
		{
			return;
		}
		for (int end = arr.size() - 1; end > 0; --end)
		{
			for (int i = 0; i < end; ++i)
			{
				if (arr[i] > arr[i + 1])
				{
					swap(arr, i, i + 1);
				}
			}
		}
	}

	static void selectionSort(vector<int> &arr)
	{
		if(arr.empty() || arr.size() < 2)
		{
			return;
		}
		for (int i = 0; i < arr.size(); ++i)
		{
			int minIndex = i;
			for (int j = i + 1; j < arr.size(); ++j)
			{
				if (arr[minIndex] > arr[j])
				{
					minIndex = j;
				}
			}
			swap(arr, minIndex, i);
		}
	}

	static void insertionSort(vector<int> & arr)
	{
		if(arr.empty() || arr.size() < 2)
		{
			return;
		}
		for (int i = 1; i < arr.size(); ++i)
		{
			for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; --j)
			{
				swap(arr, j, j + 1);
			}
		}
	}

	static void swap(vector<int> &arr, int i, int j)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	int* generateRandomArr(int maxSize, int maxValue)
	{
		int size = (int)((maxSize + 1) * (rand() % 10 / 10.0));
		int *array = new int[size];

		for (int i = 0; i < size; ++i)
		{
			array[i] = (int)((maxValue + 1) * (rand() % 10 / 10.0)) - (int)((maxValue + 1) * (rand() % 10 / 10.0));
		}
		return array;
	}
	
};