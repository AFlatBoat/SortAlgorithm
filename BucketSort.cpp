/**********
Ͱ����
��������������档�������˺�����ӳ���ϵ����Ч���Ĺؼ����������ӳ�亯����ȷ����
������ԭ�������������ݷ��Ӿ��ȷֲ��������ݷֵ�����������Ͱ�
ÿ��Ͱ�ٷֱ������п�����ʹ�ñ�������㷨�����Եݹ鷽ʽ����ʹ��Ͱ����������򣩡�
***********/

// ÿ��Ͱ������ 
int bucketSort(int* arr, int n, int bucketSize) {
   // ȷ�������Сֵ
    int minVal = arr[0];
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
      	if (arr[i] < minVal) 
          	minVal = arr[i];                // �������ݵ���Сֵ
     	 else if (arr[i] > maxVal)
          	maxVal = arr[i];                // �������ݵ����ֵ
    }
 
    // Ͱ�ĳ�ʼ��
    int bucketCount = (maxVal - minVal) / bucketSize;       // ����Ͱ�ĸ��� 
    int* buckets = new int[n];	
    int* count = new int[bucketCount];		// ������ 
    //��ʼ�������� 
    for (int i = 0; i < bucketCount; i++)		
        count[i] = 0;
    for (int i = 0; i < n; i++){		// ÿ��Ͱ��ŵ����ݸ��� 
    	int k = arr[i] / bucketSize;
		count[k]++; 
	}
	for (int i = 1; i < bucketCount; i++)		// ���ÿ��Ͱ�Ľ����� 
		count[i] = count[i-1] + count[i];
 
    // �����ݷ��䵽����Ͱ��
    for (int i = 0; i < n; i++) {
        int k = arr[i] / bucketSize;
        buckets[count[k] - 1] = arr[i];
        count[k]--;
    }

	// ��ÿ��Ͱ��������
    for (int i = 0; i < bucketCount; i++) {
    	if(count[i] == count[i+1])     // ������Ͱ 
			continue;
		if(i == bucketCount - 1){     // �������һ��Ͱ ,����ѭ�� 
			sort(buckets[count[i]], (n-1));
			break;
		}
			
        sort(buckets[count[i]], buckets[count[i+1]]);        //�������Ͱ������Ϊ���������еİ������             
    }
    
    // �����ݴ�Ͱ���ó���
	for (int i = 0; i < n; i++)
		arr[i] = buckets[i];
}
