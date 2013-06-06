/*
Hilbert basis of cuts - April 2013
- Tanmay Deshpande (crypton480)
tanmaydesh5886@gmail.com
* 
* 
Takes a graph as an incidence matrix and outputs a set of cuts in a file ready for Normaliz to compute Hilbert bases
http://www.mathematik.uni-osnabrueck.de/normaliz/
* 
*/

#include <iostream>  
#include <fstream>
#include <math.h>
using namespace std; 
		     
	
int main()
{
int a,b;
b=10; //no of vertices
a=15; //no of edges
int I[a][b];
ifstream mat ("matrix.txt"); //input graph as incidence matrix with edges->rows, vertices->columns
ofstream graph ("graph.in"); //prepare output file for Normaliz

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

graph<<pow(2,b)<<"\n"; //no of rows in file; needed by Normaliz
graph<<a<<"\n"; //no of columns; needed by Normaliz

int e[b]; //Declare a 0-1 vector e[b] to be a char vector of a subset of the vertex set.
int c;
for(e[0]=0;e[0]<2;e[0]++) //forloop.cpp makes this easier!
for(e[1]=0;e[1]<2;e[1]++)
for(e[2]=0;e[2]<2;e[2]++)
for(e[3]=0;e[3]<2;e[3]++)
for(e[4]=0;e[4]<2;e[4]++)
for(e[5]=0;e[5]<2;e[5]++)
for(e[6]=0;e[6]<2;e[6]++)
for(e[7]=0;e[7]<2;e[7]++)
for(e[8]=0;e[8]<2;e[8]++)
for(e[9]=0;e[9]<2;e[9]++)
{//take a subset S of V and list edges in delta(S). Some sets appear twice. Normaliz takes care of it!
	for(int j=0;j<a;j++){ //for all edges,
		c=0;
		for(int k=0;k<b;k++){
			c=c+(e[k]*I[j][k]);
		}
		if(c%2==0) //check if exactly one endpoint of e is in S
			graph<<"0 ";
		else
			graph<<"1 ";
	}
graph<<"\n";		
} //end subset of vertices loop	

graph<<"1";	 //tells normaliz to compute Hilbert bases using Lattice generated by cuts and NOT Z^n
}//end main

//Tested for graphs upto 10 vertices. 
