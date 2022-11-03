#include <iostream>
using namespace std;

int main() {
	char C;
	cin>>C;
	
	if(C=='A'||C=='E'||C=='I'||C=='O'||C=='U'||C=='a'||C=='e'||C=='i'||C=='o'||C=='u'){
	     cout<<"Vowel"<<endl;
	}
	else{
	     cout<<"Consonant"<<endl;
	}
	return 0;
}