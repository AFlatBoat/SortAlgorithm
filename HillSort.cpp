/******
ϣ������
�򵥲�������ĸĽ��档�����������Ĳ�֮ͬ�����ڣ�
�������ȱȽϾ����Զ��Ԫ�ء�ϣ�������ֽ���С��������
*******/

void HillSort(int* a, int n){
	for(int gap = n/2; gap > 0; gap = n/2){
		for(int i = gap; i < n; i++){
			int j = i;
			int val = a[i];
			
			while(j-gap >= 0 && val < a[j-gap]){
				a[j] = a[j-gap];
				j = j - gap;
			}
			a[j] = val;
		}
	}
}
