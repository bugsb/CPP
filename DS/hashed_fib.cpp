#include <iostream>
#include<unordered_map>
static std::unordered_map<unsigned long,unsigned long> cache;
unsigned long long fib(unsigned long long);
int main()
{	
	int input{};

	std::cout<<"Enter a number to get fibonachi: ";
	std::cin>>input;

	unsigned long long  ans = fib(input);
	std::cout<<std::endl<<"The fibonachi of "<<input<<" is :"; 
	std::cout<<ans<<std::endl;
	std::cout<<std::endl;
	std::cout<<"------------------The Hash Table-----------------------"<<std::endl;

	for (auto it:cache)
		std::cout<<" "<<it.first<<": "<<it.second<<std::endl;
	std::cout<<"------------------------------------------------------"<<std::endl;
	return 0;
}

unsigned long long fib(unsigned long long n) {

	if(n<2) return n;
	if(cache[n])
		return cache.at(n);

	cache[n] = fib(n-2) + fib(n-1);

	return cache[n];
}


