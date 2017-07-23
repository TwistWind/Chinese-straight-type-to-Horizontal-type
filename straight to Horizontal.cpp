#include  <iostream>
#include  <fstream>
#include  <sstream>
#include  <string>
#include  <iomanip>

using namespace std ;
int main(int argc,char* argv[]){
	const int MAX = 100 ;
	ifstream input(argv[1]) ;	
	string line ;
	ostringstream output[MAX]  ;
	int  m = 0 , max = 0 ;
	while (getline(input,line) ) {
        
        if ( max < line.length() ) max = line.length() ;
        output[m++] << setw(MAX) << setiosflags(ios::left) 
                         << line.c_str() ;
        
    }
	int i , j ;
    for ( j = 0 ; j < max ; j += 2 ) {
        for ( i = m-1 ; i >= 0 ; --i ) {
            cout << output[i].str()[j] << output[i].str()[j+1]
                 << "  " ;
        }
        cout << endl ;
    }

    return 0 ;
	
}
