#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
string playidx;
string songidx;
string clientidx;
string playtsx;
string playts2x;

string total1;
string total2;
int main()
{
	string input;
	ifstream textfile("exhibitA-input.csv");
	int i=0;
		int j=0;
		int clientid,playts,playid,songid,soundend,clientidend,playtsend=0,distinctnumber=1,clientcount=0;
	if (textfile.is_open())
	{
		cout << "File is opened." << endl;
		string firstline;
		getline(textfile,firstline,'\n');
		while(textfile.eof())
		{
			getline(textfile,playidx,'\t');
			getline(textfile,songidx,'\t');
			getline(textfile,clientidx,'\t');
			getline(textfile,playtsx,' ');
			getline(textfile,playts2x,'\n');
			clientid= atoi(songidx.c_str());
			//cout << p-> CLIENT_ID << endl;
			i++;
			j++;
			if (playtsx == "08/08/2016")
			{
				int counter=1;
				int counter2=0;
				total1= songidx;
				while (clientid == counter)
	{
		while(songidx != total1)
		{
			distinctnumber++;
			counter2++;
		}
		counter++;
	}
			}
			if (playtsx == "09/08/2016")
			{
				int counter=1;
				int counter2=0;
				total1= songidx;
				while (clientid == counter)
	{
		while(songidx != total1)
		{
			distinctnumber++;
			counter2++;
		}
		counter++;
	}
			}
			if (playtsx == "10/08/2016")
			{
				int counter=1;
				int counter2=0;
				total1= songidx;
				while (clientid == counter)
	{
		while(songidx != total1)
		{
			distinctnumber++;
			counter2++;
		}
		counter++;
	}
			}
		}
	}
	else
	{
		cout << "File cannot be opened, please try again with the correct location of the file."<<endl;
	}
	cout << "DISTINCT_PLAY_COUNT " << "\t" << "CLIENT_COUNT" << endl;
	cout << distinctnumber << "\t" << clientcount<<endl;
	return 0;
}