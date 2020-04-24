/**********
Ͱ����
��������������档�������˺�����ӳ���ϵ����Ч���Ĺؼ����������ӳ�亯����ȷ����
������ԭ�������������ݷ��Ӿ��ȷֲ��������ݷֵ�����������Ͱ�
ÿ��Ͱ�ٷֱ������п�����ʹ�ñ�������㷨�����Եݹ鷽ʽ����ʹ��Ͱ����������򣩡�
***********/

function bucketSort(arr, bucketSize) {
    if (arr.length === 0) {
      return arr;
    }
 
    var i;
    var minValue = arr[0];
    var maxValue = arr[0];
    for (i = 1; i < arr.length; i++) {
      if (arr[i] < minValue) {
          minValue = arr[i];                // �������ݵ���Сֵ
      } else if (arr[i] > maxValue) {
          maxValue = arr[i];                // �������ݵ����ֵ
      }
    }
 
    // Ͱ�ĳ�ʼ��
    var DEFAULT_BUCKET_SIZE = 5;            // ����Ͱ��Ĭ������Ϊ5
    bucketSize = bucketSize || DEFAULT_BUCKET_SIZE;
    var bucketCount = Math.floor((maxValue - minValue) / bucketSize) + 1;  
    var buckets = new Array(bucketCount);
    for (i = 0; i < buckets.length; i++) {
        buckets[i] = [];
    }
 
    // ����ӳ�亯�������ݷ��䵽����Ͱ��
    for (i = 0; i < arr.length; i++) {
        buckets[Math.floor((arr[i] - minValue) / bucketSize)].push(arr[i]);
    }
 
    arr.length = 0;
    for (i = 0; i < buckets.length; i++) {
        insertionSort(buckets[i]);                      // ��ÿ��Ͱ������������ʹ���˲�������
        for (var j = 0; j < buckets[i].length; j++) {
            arr.push(buckets[i][j]);                     
        }
    }
 
    return arr;
}
