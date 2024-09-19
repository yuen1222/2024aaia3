#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(int i=0;s[i]!=0;i++){
		char c=s[i];
		if(c!='2')printf("%c",c);
	}
	printf("\n");
}
