#include <iostream>
#include <fstream>

using namespace std ; 

int main(){

	int flag =0 ;

	ifstream f ; 
	ofstream f1 ;
	char ch[200];

	f.open("first.txt",ios::in);
	f1.open("sec.txt",ios::app);

	while(f.getline(ch,200,' ')){
        flag =1 ;
		f1<<ch<<" " ; 
	}

	if(!flag)
		cout<<"\nThe file does not exist ! :( ";

	f.close();
	f1.close();
	return 0 ;

}
