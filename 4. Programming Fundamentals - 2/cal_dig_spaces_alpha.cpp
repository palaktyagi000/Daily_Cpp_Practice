#include<iostream>
using namespace std;

//WAP to calculate digits, whitespaces, alphabets & other characters

int main(){

	int digits = 0;
	int alphabets = 0;
	int spaces = 0;
	int other = 0;

	char ch;
	ch = cin.get();
	while(ch!='$'){
		if(ch>='0' and ch<='9'){
			digits++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and  ch<='Z'))
		{
			alphabets++;
		}
		else if(ch==' ' or ch=='\n' or ch=='\t'){
			spaces++;
		}
		else{
			other++;
		}

		ch=cin.get();

	}

	cout<<"Digits "<<digits<<endl;
	cout<<"alphabets "<<alphabets<<endl;
	cout<<"spaces "<<spaces<<endl;
	cout<<"others "<<other<<endl;

//assignment has least precedence.
	


	return 0;
}