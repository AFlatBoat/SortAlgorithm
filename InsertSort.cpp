/********
��������
ͨ�������������У�����δ�������ݣ���������������
�Ӻ���ǰɨ�裬�ҵ���Ӧλ�ò����롣
*********/

void InsertSort(int* a, int n){
	int preInd = 0;
	int val  = 0;
	
	for(int i = 0; i < n; i++){
		preInd = i-1;
		val = a[i];
		while (preInd >= 0 && val < a[preInd]){
			a[preInd + 1] = a[preInd];
			preInd--; 
		}
		a[preInd + 1] = val;
	}
} 

