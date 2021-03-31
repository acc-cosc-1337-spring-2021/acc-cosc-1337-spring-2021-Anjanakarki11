//write include statements
#include"dna.h"
#include"dna.cpp"
#include<string>
#include<iostream>
//write using statements
using std::string;
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	std::string dna;
	int number;
	cout<<"Enter the number 1 or 2: ";
	cin>>number;
	cout<<"Enter the DNA string:";
    cin>>dna;
	char continue_ = 'y';
	while (continue_ == 'y');
	{
		if (number == '1')
		{
			//std::string dna = "ACCGCAATT";
			double gc_count;
			gc_count = get_gc_content(dna);
			cout<<gc_count<<"\n";
		}
		else if (number == '2')
		{
			std::string dna;
			//cout<<"Enter the DNA string:";
    		//cin>>dna;
			std::string dna_complement;
			dna_complement = reverse_string(dna);
			get_dna_complement(dna_complement);

		}
		else{
			cout<<"invalid";
		}
		cout<<"\n Do you want to continue(y/n)?: ";
		cin>>continue_;
	}
	
	return 0;
}