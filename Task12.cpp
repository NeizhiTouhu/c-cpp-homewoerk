#include <iostream>
using namespace std;

int main()
{
	int list[3][3] = {{1,3,5},{4,9,16},{-1,-2,-3}};
	int input=0;
	int br=1;
	int score=0;
	int answer;
	
	cout<<"Guess the last number!\n";
	
	for(int i=0;i<3&&br!=0;i++){
		br = 0;
		cout<<"\nQuestion"<<i+1<<" is: "<<list[i][0]<<" "<<list[i][1]<<endl;
		
		answer= list[i][2];
		for(int i=0;i<3&&br==0;i++){
			cout<<"\nStart your no."<<i+1<<" try. You have 3 chances.";
			cin>>input;
			if(input==answer)
			{
				cout<<"Great! You got the right answer.\n\n\n";
				br = 1;
				score = score+10;
			}
			else
			{
				switch (i+1) {
				case 1:
					cout<<"It's not right. Try another.\n\n";
					break;
				case 2:
					cout<<"It's wrong. Don't be sad. You have 1 last chance.\n\n";
					break;
				case 3:
					cout<<"You didn't got the right answer. The answer is "<<answer<<".\n\n";
					break;
				}
			}
		}
		if(br==1&&i!=2){
			cout<<"Type 1 to continue or type 0 to exit:";
			cin>>br;
		}
	}
	cout<<"\nGAME OVER\n";
	cout<<"Your final score is "<<score<<"/30.";
	return 0;
}
