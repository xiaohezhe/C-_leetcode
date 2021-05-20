#include <iostream>
#include <algorithm>  
#include <vector>

using namespace std;

int main() {
//vectore  similar as an arrang, define a vector and output the result
//**********************************************************************
	vector<int> arr ={1,0,2,3,0,4,5,0};
	// vector<int> arr ={1,2,3};
	int n=arr.size();
	int count=0;

   //  for (int i=0; i<nums.size() ; i++)
   //  {
	  // cout << ' ' << nums[i]<< endl;

   //  }
//**********************************************************************

	for (int i=0; i<n; i++)
	{

		if (arr[i]==0)
		{
			arr.insert(arr.begin()+i+1,0);//insert(position, value)
			i++;
			count++;
		  	cout << "i: " << i << endl;

		}

	  	cout << "arr: "<< i<<" " << arr[i] << endl;
	}

	arr.erase(arr.end()-count,arr.end());
	// 1. vectorname.erase(position)
	// 2. vectorname.erase(startingposition, endingposition)
	std::vector<int>::iterator it = arr.end()-1;//or auto it=arr.end()-1 same
	cout << "arr.end(): " << *it << endl;
// 	The C++ function std::vector::end() returns an iterator which points to past-the-end element in the vector container.

// The past-the-end element is the theoretical element that would follow the last element in the vector.

	n=arr.size();
  	cout << "length: " << n<< endl;
    for (int i=0; i<n ; i++)
    {
	  cout << ' ' << arr[i]<< endl;

    }


};


