#include <iostream>
#include <algorithm>  //swap
#include <vector>

using namespace std;


int main() {

	vector<int> heights ={1,1,4,2,1,3};
	int size=heights.size();
	vector<int> result;
	int number=0;



	// A loop to copy elements of
    // old vector into new vector
    // by Iterative method
    // for (int i=0; i<size; i++)
    // {
    //     result.push_back(heights[i]);

    // }

	result=heights;

	// for(int p=0; p< size; p++)
	// {

	// 	for (int i=0;i<size-p-1;i++)
	// 	{	
	// 		if(heights[i]>heights[i+1])
	// 		{
	// 			swap(heights[i],heights[i+1]);

	// 		}

	// 	}

	// }
	sort(heights.begin(),heights.end());

	for(int i=0; i<size;i++)
	{
		if (heights[i]!=result[i])
		{
			number++;
		}

	}
	cout<<"number: "<<number<<endl;

	for(int i=0; i<size; i++)
	{
		cout<<"heights: "<<heights[i]<<" , result: "<< result[i]<<endl;
	}
























};