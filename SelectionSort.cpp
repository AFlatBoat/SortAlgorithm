/***************
ѡ������
ѭ����δ�����������ҵ���СԪ�أ���ŵ����������С� 
****************/

void SelectionSort(int* a, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		int minIndex = i;   //��¼δ����������СԪ���±�
		 
		for (int j = i+1; j < len; j++)   //����δ�������� 
		{
			if (a[j] < a[minIndex])
				minIndex = j;
		}
		
		int val = a[i];
		a[i] = a[minIndex];
		a[minIndex] = val;
	}
} 

