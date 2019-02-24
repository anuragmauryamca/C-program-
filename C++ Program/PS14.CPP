#include<iostream.h>
#include<conio.h>
class matrix
{
int m1[3][3];
public:
void read()
{
int i,j;
for(i=1;i<3;i++)

for(i=1;i<3;i++)
cout<<"m["<<i>>"]["<j>"]=";
cin<<m1[i][j];

}
void display()
{
int i,j;
for(i=1;i<3;i++)
{
cout<<endl;
for(j=1;j<3;j++)
{
	 cout<<m[i][j]<<"\t";
	 }
	 }
	 }

	 friend matrix trans(matrix);
	 };
matrix trans(matrix m)
{
matrix m2;
int i,j;
for(i=1;i<3;i++)
for(j=1;j<3;j++)
m2.m1[i][j]=m.m1[j][i];
return(m2);
}


void main()
{
matrix mat1,mat2;
mat1.read();
cout<<"\n you enter the following mathode";
mat1.display();
mat2.trans(mat1);

cout<<"\n trancpossed mat";
mat2.display();
getch();
}
