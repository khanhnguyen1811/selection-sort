#include <iostream>
using namespace std; 
void swapp(int *pa, int *pb){
	int tam = *pa; 
	*pa = *pb; 
	*pb = tam; 
	
}
void selectionSort(int arr[], int sopt){
	int i, j; 
	//duyet i tu phan tu dau den phan tu cuoi. 
	for (i = 0; i < sopt; i++)
	{
		for (j = i+1; j < sopt; j++)
		{
			//so sanh arr[i] > arr[j] thi swap. 
			if (arr[i] > arr[j])
			{
				swapp(&arr[i], &arr[j]);
			}

		}
	}
	
}
int main(){
	int arr[100], i, sopt; 
	cout << "nhap so phan tu: "; cin >> sopt; 
	for (i = 0; i < sopt; i++)
	{
		cin >> arr[i]; 
	}
	selectionSort(arr, sopt); 
	cout << "mang dc sap xep la: " << " \n";
	for (i = 0; i < sopt; i++)
	{
		cout << arr[i] << " ";
	}
	return 0; 
}