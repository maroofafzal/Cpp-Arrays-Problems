#include<iostream>
using namespace std;
int main ()
{
int a[3][3];
cout<<"Enter 9 numbers:\n";
for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
    cin>>a[i][j];}
}

 cout<<"The 3x3 matrix is:\n";
  for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
		cout<<a[i][j]<<" ";}
	cout<<endl;}
	
	int sum_row [3]={0};
	int sum_column [3]={0};
    int Diagonal_Sum = 0; 
     cout<<"Sum of Rows:\n";
	 for (int i=0;i<3;i++){
	  for (int j=0;j<3;j++){
		sum_row [i]+=a[i][j];
    	}
	   cout<<"Row "<< i+1 <<": "<<sum_row[i]+0<<endl;
      }

     cout << "Sum of Columns:\n";
for (int i = 0; i < 3; i++) { 
    for (int j = 0; j < 3; j++) { 
        sum_column[j] += a[i][j]; 
    }
    cout << "Column " << i + 1 << ": " << sum_column[i] << endl; 
}
       
      
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (i == j) {  
            Diagonal_Sum += a[i][j];
        }
    }
}
cout << "Sum of Diagonal: " << Diagonal_Sum << endl;

          }
