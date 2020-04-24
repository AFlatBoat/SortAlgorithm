/*********
������
���ö��������ݽṹ����Ƶ�һ�������㷨���ѻ���һ��������ȫ�������Ľṹ��
��ͬʱ����ѻ������ʣ����ӽ��ļ�ֵ����������С�ڣ����ߴ��ڣ����ĸ��ڵ㡣 
**********/
 
#include <algorithm>
using namespace std;

// ���Ʒ�ʽ���������(len��arr�ĳ��ȣ�index�ǵ�һ����Ҷ�ӽڵ���±�)
void Heap(int* arr, int len, int index)
{
    int left = 2*index + 1; 	// index�����ӽڵ�
    int right = 2*index + 2;	// index�����ӽڵ�
    int maxIdx = index;
    
    if(left < len && arr[left] > arr[maxIdx])     
		maxIdx = left;
    if(right < len && arr[right] > arr[maxIdx])    
		maxIdx = right;
 
    if(maxIdx != index){
        swap(arr[maxIdx], arr[index]);
        Heap(arr, len, maxIdx);
    }
 
}
 
// ������
void heapSort(int* arr, int size)
{
    // ��������ѣ������һ����Ҷ�ӽڵ����ϣ�
    for(int i = size/2 - 1; i >= 0; i--){
        Heap(arr, size, i);
    }
 
    // ���������
    for(int i = size - 1; i >= 1; i--){
        swap(arr[0], arr[i]);           // ����ǰ���ķ��õ�����ĩβ
        Heap(arr, i, 0);              // ��δ�������Ĳ��ּ������ж�����
    }
}
