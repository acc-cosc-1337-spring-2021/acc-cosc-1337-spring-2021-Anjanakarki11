#include "dna.h"
#include<string>
#include<iostream>
using std::string;
using std::cout; using std::cin;
using std::swap;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna)
{
    int counter = 0;
    double gc_content;
    for(std::size_t i=0; i <dna.size(); ++i)
    {
        cout<<"\n testing chars "<<dna[i];
        if (char(dna[i]=='c') || char(dna[i]== 'G'))
        {
            counter++;
        }
    }
    cout<<counter<<"\n";
    gc_content = counter / dna.length();
    return gc_content;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string reverse_string( string dna){
    
    int n = dna.length();
  
    for (int i = 0; i < n / 2; i++){
        
    
        swap(dna[i], dna[n - i - 1]);
        
    }
    return dna;
    
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna){
    int n = dna.length();
  
    for (int i = 0; i < n; i++){
        
    
        if (dna[i] == 'A'){
            dna[i]= 'T';
        }
        else if(dna[i]== 'T'){
            dna[i]= 'A';
        }
        else if(dna[i]== 'c'){
            dna[i]= 'G';
        }    
        else if (dna[i]== 'G'){
            dna[i]= 'C';
        }
        else{
            cout<<"invalid";
        } 
    
    }
return dna;
}
