#include <bits/stdc++.h> 
using namespace std ;

int write_file(){

	ofstream d ;
	char c[200];
    d.open("text1.txt",ios::app);
    cout<<"\nPress '.' to stop writing !!!\n";
   
       cin.getline(c,200,'.');
       d<<c<<" ";

    d.close();
    return 0 ;
}

int main(){
	char strr[200] ;
	char ch[200],q;
	ifstream f ;

    int s , s1 , flag , j , k;

	//create a text file	
	flag= write_file();
	

do {

    flag=0;
	cout<<"\nSubstring?? ";
	cin>>ch;
	s1=strlen(ch);

	f.open("text1.txt",ios::in);

	while(f.getline(strr,200,' ')){
        s=strlen(strr);
        for(j=0;j<s-s1+1;j++){
        	if(strr[j]==ch[0]){

        		for(k=0;k<s1;k++)
        			if(strr[j++]!=ch[k])        				
        				break;
        			

        		if(k==s1){
        			cout<<"\n"<<strr;
        			j=s+s1;
        			flag =1 ;
        		}

        	}
        }
	}
    if(!flag)
        	cout<<"\nNot found!!";

    cout<<"\nCheck for another sub-string ?? (y to continue) - ";
    cin>>q;

    f.close();

    }while((q=='y')||(q=='Y'));

    
	return 0 ;
}