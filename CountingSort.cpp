/*********
��������
�������ڽ����������ֵת��Ϊ���洢�ڶ��⿪�ٵ�����ռ��С�
��������Ҫ����������ݱ�������ȷ����Χ��������
*********/

void CountingSort(int* data, int length){
    if (data == nullptr || length <= 0)
        return;

    //ȷ���������ֵ
    int max = data[0];
    for (int i = 1; i < length; ++i)
    {
        if (data[i] > max)
            max = data[i];
    }

    // ȷ��ͳ�����鳤�Ȳ����г�ʼ��
    int* coutData = new int[max + 1];
    for (int i = 0; i <= max; ++i)
        coutData[i] = 0;
        
    // �������飬ͳ��ÿ�������ֵĴ���
    for (int i = 0; i < length; ++i)
        ++coutData[data[i]];
        
    // �������飬ĳ���������˼��Σ�����data���ۼ��������
    int index = 0;
    for (int i = 0; i <= max; ++i){
        for (int j = 0; j < coutData[i]; ++j){
            data[index++] = i;
        }
    }
}

