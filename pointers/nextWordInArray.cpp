#include <iostream>
using namespace std;

char* sliceString(char* s){
	char c = s[0];
	int i = 0;
	while(c!='\0'){
		i++;
		if(c == ' '){
//			cout << s+i << endl;
			return s+i;
		}
		c = s[i];
	}
	return s;
}

int main(){
	char s[] = "This is a string with spaces";
	cout << s[5] << endl;
	cout << s+5 << endl;
	cout << sliceString(s) << endl;
}
