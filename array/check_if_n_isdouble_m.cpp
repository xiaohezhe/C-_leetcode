#include <iostream>
#include <algorithm>  //swap
#include <vector>

using namespace std;


int main() {

	vector<int> arr ={1,3,0,5};
	int size=arr.size();
	// int j=0;
	int mod;
	int div;
	bool result;

	for (int i=0; i<size; i++)
	{
		mod = arr[i]%2;
		div = arr[i]/2;
		if(mod==0)
		{

		  cout<< "arr[i]: "<< arr[i] <<" mod: "<< mod << " div: "<< div << endl;
		  for (int j=0;j<size;j++)
		  {
			if(div == arr[j] && i!=j) // for the case of {0,0} and the case of {1,3,0,5}
			{
				cout<< "arr[j]: " << j << " , "<< arr[j] << endl;
				result=true;
			}
		  }
		}
	}
	
	// result=false;
	cout<< "result: "<< result << endl;

};