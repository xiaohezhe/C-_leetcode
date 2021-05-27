#include <iostream>
#include <algorithm>  //swap,max
#include <vector>

using namespace std;


int main() {
//vectore  similar as an array, define a vector and output the result
//**********************************************************************
	vector<int> arr ={17,18,5,4,6,1};
	int size=arr.size();

	int mx=-1;
	int temp;
	for(int i = arr.size() - 1; i>=0; i--){
		temp = arr[i];
		arr[i] = mx;
		mx = max(mx, temp);
	}
		




	for(int i=0; i<size; i++)
	{
		cout << "arr"<< i<<" : "<<arr[i]<< endl;
	}



};


	// for (int p=0;p<size;p++)
	// {
	// 	max=0;
	// 	if(p==size-1)
	// 	{
	// 		arr[p]=-1;
	// 	}
	// 	else{
	// 			for (int i=p+1; i<size; i++)
	// 			{
	// 				if(arr[i]>max)
	// 				{
	// 					max=arr[i];
	// 					arr[p]=max;

	// 					cout << "i: "<< i<<" , "<<"p: "<<p<< ", max :"<< max<< endl;
	// 				}	
	// 			}
	// 		}
	// }
	// int p=0;

	// if(arr.empty())
	// {
	// 	arr=arr;
	// }
	// while(p<size-1)
	// {
	// 	for (int i=p+1; i<size; i++)
	// 	{
	// 		if(arr[i]>max)
	// 		{
	// 			max=arr[i];
	// 			arr[p]=max;


	// 			cout << "i: "<< i<<" , "<<"p: "<<p<< ", max :"<< max<< endl;
	// 		}	
	// 	}
	// 	p++;
	// 	max=0;
	// 	cout << " p :"<< p<< endl;
	// }
	// arr[p]=-1;

	// int mx = -1;
