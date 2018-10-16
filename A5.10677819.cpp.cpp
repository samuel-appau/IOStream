#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct student{
	int IDnumber;
	string name;
	char gender;
	int age;
	float score,averageage,averagescore;
	
	}
int main(){
	int i,student[i];
	
for(int i=0;i<5;i++)
student[i]=i+1;


	cout<<"Enter your name"<<endl;
	cin>>student[i].name;
	
	
	cout<<"Enter your IDnumber"<<endl;
	cin>>student[i].IDnumber;
	
	cout<<"Enter your age"<<endl;
	cin>>student[i].age;
	
	cout<<"Whats your gender "<<endl;
	cin>>student[i].gender;
	
	cout<<"Enter your score"<<endl;
	
	cin>>student[i].score;
	
	if(score>80){
		
		cout<<"Your grade is A"<< endl;	
	}
	 else if (70<=score<=79){
	 
	 
	 cout<<"Your grade is B"<<endl;
	 }
	 else if(60<=score<=70){
	 cout<<"Your grade is C"<< endl;
}
	 
	 else if(50<=score<=69){
	 
	 cout<<"Your grade is D"<<endl;
            }     
	 else if(40<=score<=49){
	 
	 cout<< "Your grade is E"<<endl;
	 }
	 else  
	 
	 cout<<"Your grade is F" <<endl;
	 
	averaggescore=(student[0].score+student[1].score+student[2].score+student[3]].score+student[4].score)/5
	averageage=(student[0].age+student[1].age+student[2].age+student[3].age+student[4].age)/5
	
	
	cout<<"the averagescore is"<<averagescore<<endl;
	cout<<"the averageage is"<<averageage<<endl;
	
	
	 ofstream out( "textfile.txt" );
   if( !out )
   {
      cout << "Couldn't open file."  << endl;
      return 1;
   }

   out << "student[i]";

   out.close();
}
	
	return 0;
	
}
