/*
Hilbert basis of cuts - April 2013
- Tanmay Deshpande
tanmaydesh5886@gmail.com
* 
* 
Express a vector as a positive linear combination of cuts
* 
*/

#include <iostream>  
#include <fstream>
#include <math.h>
using namespace std; 
		     
	
int main()
{
int a,b;
b=20; //no of edges
a=151; //no of cuts
int I[a][b];
ifstream mat ("cuts.txt"); //input char vectors of cuts

for(int i=0;i<a;i++)
for(int j=0;j<b;j++)
mat>>I[i][j];

/* Use this in case you want to know if the matrix is input correctly
for(int i=0;i<a;i++){
for(int j=0;j<b;j++){
cout<<I[i][j]<<" ";
}
cout<<"\n";
}
cout<<"\n";*/

for(int i=0;i<a;i++)
cout<<"\nvar x"<<i+1<<";";

cout<<"\nmaximize obj: 0 * x1;";

for(int i = 0; i<b; i++)
{
cout<<"\ns.t. c"<<i+1<<": ";
for(int j = 0; j<a; j++)
{
	if(I[j][i] != 0)
		cout<<"x"<<j+1<<" + ";
}
}

for(int i=0;i<a;i++)
cout<<"\ns.t. c"<<i+b+1<<": x"<<i+1<<">=0;";

cout<<"\nsolve;";
cout<<"\ndisplay ";
for(int j =0; j<a;j++)
cout<<"x"<<j+1<<", ";
cout<<";\nend;";

}//end main

