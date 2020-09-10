#include<iostream>


int main()
{
	int input{};
	std::cout<<"No of input :";
	std::cin>>input;
	bool arr[input];
	int i{0};
	while(input--)
	{	
		bool data{};
		std::cin>>data;
		arr[i++] = data;

	}

	int size = sizeof(arr)/sizeof(arr[0]);

	int curr{-1},counter{-1};
	for(int j{0};j<size;j++)
	{
		if(arr[j] == 0 )
			curr++;
		else	
			curr = -1;
		
		counter = std::max(curr,counter);
	}

	std::cout<<"\nThe max distance is "<<counter;
	
	return 0;
}