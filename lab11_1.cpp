#include<iostream>
using namespace std;

int main(){
	int ca=0,cb=0,cc=0,cd=0,cf=0,x=1;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	char grade;

	do{
		cout << "Student [" << x <<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0'){
			break;
		}else if(grade == 'A'){
			ca++; // if grade is A
			count[0]=ca;
		}else if(grade == 'B'){
			cb++; // if grade is B
			count[1]=cb;
		}else if(grade == 'C'){
			cc++; // if grade is C
			count[2]=cc;
		}else if(grade == 'D'){
			cd++; // if grade is D
			count[3]=cd;
		}else if(grade == 'F'){
			cf++; // if grade is F
			count[4]=cf;
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again." << endl;
			x=x-1;
		} 
		x++;
	
	}while(true);
	
	cout << "In total "<< x-1 <<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];				

	
	return 0;
}
