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

void shellSort(int A[], int n)
{
	int h = 1;
	while(h < n / 3) h = 3 * h + 1;
	while(h >= 1)
	{
		for (int i = h; i < n; ++i)
		{
			for (int j = i; j >= h && A[j] < A[j - h] ; j -= h)
			{
				swap(A, j, j - h);
			}
		}
		h /= 3;
	}
}

void mergeSort(int A[], int left, int right, int temp[])
{
	if(left < right)
	{
		int mid = left + (right - left) / 2;
		mergeSort(A, left, mid, temp);
		mergeSort(A, mid + 1, right, temp);
		merge(A, left, right, mid, temp);
	}
}

void merge(int A[], int left, int right, int mid, int temp[])
{
	int i = left;
	int j = mid + 1;
	int t = 0;
	while(i <= mid && j <= right)
	{
		if(A[i] <= A[j]) temp[t++] = A[i++];
		else temp[t++] = A[j++];
	}

	while(i <= mid)
		temp[t++] = A[i++];
	while(j <= right)
		temp[t++] = A[i++];

	t = 0;
	while(left <= right)
		A[left++] = temp[t++];
} 