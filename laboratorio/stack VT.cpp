
#include <iostream>
#include <vector>

using namespace std;

template<class T> class Stack;

template<class T>
Stack<T> operator+(const Stack<T> &s1, const Stack<T> &s2)
{
	Stack<T> result=s1;
	for(unsigned i=0;i<s1.items.size();++i)
	{
		result.items.push_back(s2.items[i]);
	}
	return result;
}

template<class T>
Stack<T> operator-(const Stack<T> &s1, const Stack<T> &s2)
{
	Stack<T> result;
	for(int i=0;i<s1.items.size();++i)
	{
		bool pase=true;
		for(int a=0;a<s2.items.size();++a)
		{
			if(s2.items[a]==s1.items[i])
				pase=false;
			break;
		}
		if(pase==true)
		{
			result.push(s1.items[i]);
		}
	}
	return result;
}
				   
template<class T>
ostream& operator<<(ostream &output, const Stack<T> &s3)
{
   for(int i=0;i<s3.items.size();i++)
   {
	   output <<s3.items[i] << endl;
   }
   return output;
}
									  
template<class T>
 class Stack
{
	friend Stack<T> operator+ <>(const Stack<T> &s1, const Stack<T> &s2);
	friend Stack<T> operator- <>(const Stack<T> &s1, const Stack<T> &s2);
	friend ostream& operator<< <>(ostream &output, const Stack<T> &s1);
	vector<T> items;
					  
	public:
		bool empty() const {return items.empty();}
		void push(const T &item) {items.push_back(item);}
		T pop()
		{
			T last=items.back();
			items.pop_back();
			return last;
		}
};
									  
int main()
{
	Stack<int> s1;
	Stack<int> s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s2.push(3);
	s2.push(2);
	s2.push(4);
	Stack<int> c=s1-s2;
	cout<< c << endl;
	return 0;
}
