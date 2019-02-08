#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n,input[100],output[100],i,j,k;
	cout<<"Enter the no of stocks: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>input[i];
	}
	stack<int>st;
	st.push(0);
	output[0]=1;
	for(i=1;i<n;i++)
	{
		while(!st.empty() && input[st.top()]<=input[i])
		st.pop();
		output[i]=(st.empty())? (i+1):(i-st.top());
		st.push(i);
	}
	for(i=0;i<n;i++)
	printf("%d ",output[i]);
}
