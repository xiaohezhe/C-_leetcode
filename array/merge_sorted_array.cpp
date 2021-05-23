#include <iostream>
#include <algorithm>  //swap
#include <vector>

using namespace std;


int main() {
//vectore  similar as an array, define a vector and output the result
//**********************************************************************
	vector<int> nums1 ={3,6,4,2};
	vector<int> nums2 ={11,10,5};
	int m=4;
	int n=3;
	int size=m+n;



//******************************************************

	for (int i=0; i< size; i++)
	{
		if(i<m)
		{
			nums1[i]=nums1[i];

		}
		else
		{
			nums1[i]=nums2[i-m];
		}

	}

//******************************************************
//sort array nums1 冒泡排序

for (int j=0; j< size; j++)
{
	for (int i=0; i<size-1-j;i++)
	{
		cout<< "i: "<< i << endl;
		// int temp=0;
		if(nums1[i+1]<nums1[i])
		{

			// temp=nums1[i];
			// nums1[i]=nums1[i+1];
			// nums1[i+1]=temp;
			swap(nums1[i],nums1[i+1]);//change two data
		}
}

	
	}

//******************************************************
//out put array


	for(int i=0; i<size; i++)
	{
		cout<< "nums1 "<< nums1[i] << endl;
	}



};