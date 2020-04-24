/*******
�鲢����
���͵ķ��η��ġ���������������кϲ����õ���ȫ��������У�
����ʹÿ��������������ʹ�����жμ�����
*******/

#include <iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high){
    //lowΪ��1�������ĵ�1��Ԫ�أ�iָ���1��Ԫ��, midΪ��1�����������1��Ԫ��
    int i = low, j = mid+1, k = 0; //mid+1Ϊ��2��������1��Ԫ�أ�jָ���1��Ԫ��
    int* tem p= new int[high - low + 1]; //temp�����ݴ�ϲ�����������
    if(!temp){ //�ڴ����ʧ��
        cout << "error";
        return;
    }
    
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]) //��С���ȴ���temp��
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++]; 
    }
    while(i <= mid)//���Ƚ���֮�󣬵�һ������������ʣ�࣬��ֱ�Ӹ��Ƶ�t������
        temp[k++] = arr[i++];
    while(j <= high)//ͬ��
        temp[k++] = arr[j++];
        
    for(i = low,k = 0; i <= high; i++,k++)//���ź���Ĵ��arr��low��high������
		arr[i] = temp[k];
		
    delete []temp;//ɾ��ָ�룬����ָ��������飬������delete []
}
 
void MergeSort(int arr[], int low, int high){
    if(low < high){
        int mid = (low+high) / 2;
        
        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);
        Merge(arr, low, mid, high); 
    }
}
