void swap(int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void bubbleSort(int A[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (A[j] > A[j + 1])
			{
				swap(A, j, j + 1);
			}
		}
	}
}

void selectionSort(int A[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		int min = i;
		for (int j = i + 1; j < n; ++j)
		{
			if(A[j] < A[min]) min = j;
		}
		swap(A, i, j);
	}
}

void insertSort(int A[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = i; j > 0 && A[j] < A[j - 1] ; --j)
		{
			swap[A, j, j - 1];
		}
	}
}