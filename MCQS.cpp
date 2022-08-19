//THIS IS SURVEY LIKE PROGRAM CODED IN C++
//YOU CAN SEE THE BASIC FILE HANDLING IN THE END OF THE CODE

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//
int r=1;
int a[10],b[10],c[10];
void check(char x[])
{
	int acount=0,bcount=0,ccount=0;
	for (int i=0;i<10;++i)
	{
		switch(x[i])
		{
			case 'a':
				*(a+acount)=1;++acount;break;
			case 'b':
				*(b+bcount)=1;++bcount;break;
			case 'c':
				*(c+ccount)=1;++ccount;break;				
		}
	}
}
int sum(int q[])
{
	
	int count=0;
	for (int i=0;i<10;++i)
	{
		count+=q[i];
	}
	return count;
}
int main()
{
	string name,roll_no;
	char ans[10];
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your roll no: ";
	cin>>roll_no;
	
	cout<<"starting survey....\n";
	
//questions
	cout<<"1. What kind of book would you like to read for fun? ?\n(a)fictional\n(b)Action\n(c)Mystery\nEnter the option:";
	cin>>ans[0];
	system("cls");
	cout<<"2. When you are not sure how to spell a word, what are you most likely to do?\n(a)Read the Word again\n(b)Try to Pronounce it\n(c)Google it\nEnter the option: ";
	cin>>ans[1];
	system("cls");
	cout<<"3. When you see the word \"cat\" what do you do first?\n(a)Imagine a cat\n(b)Spell It\n(c)Draw its picture on paper\nEnter the option: ";
	cin>>ans[2];
	system("cls");
	cout<<"4. You're out shopping for clothes, and you're waiting in line to pay. What are you most likely to do while you are waiting\n(a)Look around at other clothes on the racks\n(b)Talk to the person next to you in linea\n(c)Fidget or move back and forth\nEnter your option: ";
	cin>>ans[3];
	system("cls");
	cout<<"5. What's the best way for you to study for a test?\n(a)Read the book or your notes\n(b)Have someone ask you questions that you can answer out loud\n(c)Make up index cards that you can review\nEnter the option: ";
	cin>>ans[4];
	system("cls");
	cout<<"6. What's the best way for you to learn about how something works (like a computer or a video game)?\n(a)Get someone to show you\n(b)Read about it or listen to someone explain it\n(c)Figure it out on your own\nEnter the Option: ";
	cin>>ans[5];
	system("cls");
	cout<<"7. If you went to a school party, what would you be most likely to remember the next day?\n(a)The faces of the people who were there\n(b)The music that was playedc\n(c)What you did in the party\nEnter the option: ";
	cin>>ans[6];
	system("cls");
	cout<<"8. What do you find most distracting when you are trying to study?\n(a)People walking past you\n(b)Loud noises\n(c)An uncomfortable chai\nEnter the option : ";
	cin>>ans[7];
	system("cls");
	cout<<"9. When you are angry, what are you most likely to do?\n(a)Put on your mad face\n(b)Yell and scream\n(c)Slam doors\nEnter the option: ";
	cin>>ans[8];
	system("cls");
	cout<<"10. When you are happy, what are you most likely to do?\n(a)Smile from ear to ear\n(b)Talk up a storm\n(c)Act really hyper\nEnter the option: ";
	cin>>ans[9];
	system("cls");
	
	cout<<"Survey ended"<<endl;

	check(ans);
	int a_total=sum(a);
	int b_total=sum(b);
	int c_total=sum(c);

	cout<<"YOU ARE .........\n\n\n\n";
	cout<<"Auditory :"<<a_total*10<<"%\n";
	cout<<"Visual: "<<b_total*10<<"%\n";
	cout<<"Tactile: "<<c_total*10<<"%\n";
	
	cout<<"\n\n\n\n\nThanks for having survey have a nice day\n\n\n\n\n\n";

	//Basic File handling for saving record
	
	ofstream fout("Records.txt",ios::app);
	fout<<"\n\n\n\n";
	fout<<"-----------------------------------------------------------------------------------------------";
	fout<<"-----------------------------------------RECORD------------------------------------------------";
	fout<<"Name: "<<name<<endl;
	fout<<"Roll no:"<<roll_no<<endl;
	fout<<"auditory :"<<a_total*10<<"%\n";
	fout<<"visual: "<<b_total*10<<"%\n";
	fout<<"tactile: "<<c_total*10<<"%\n";
	fout.close();
	return 0;
	
}

