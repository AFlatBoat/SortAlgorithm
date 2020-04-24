/**********
��������
ͨ��һ�����򽫴��ż�¼�ָ��ɶ����������֣�����һ���ּ�¼�Ĺؼ��־���
��һ���ֵĹؼ���С����ɷֱ���������ּ�¼�������������Դﵽ������������
************/

void quickSort(int left, int right, int* a)
{
	if(left >= right)
		return;
		
	int l = left;
	int r = right;
	int base = a[left];  //ȡ����ߵ���Ϊ��׼��
	
	while (l < r)
	{
		while (a[r] >= base && l < r)
			r--;
		while (a[l] <= base && l < r)
			l++;
		if(l < r)
		{
			int val = a[r];
			a[r] = a[l];
			a[l] = val;
		}
	}
	//��׼����λ
	a[left] = a[l];
	a[l] = base;
	
	quickSort(left, l - 1, a);//�ݹ����
	quickSort(l + 1, right, a);//�ݹ��ұ�
}









