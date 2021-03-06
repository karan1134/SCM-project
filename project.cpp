#include <iostream>

using namespace std; 
int madd(){                                                                                           //matrix addition.
int rowCount, columnCount, i, j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];                                         

	cout<<"Simple C++ Example Program for 2 D (dimensional) Array Matrix Addition Example\n";

    cout<<"Number of rows of matrices to be added : ";
    cin>>rowCount;

    cout<<"Number of columns matrices to be added : ";
    cin>>columnCount;

    cout<<"Elements of first matrix : \n";

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            cin>>firstMatrix[i][j];

    cout<<"Elements of second matrix : \n";

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            cin>>secondMatrix[i][j];

    cout<<"Sum of entered matrices : \n";

    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            cout<<resultMatrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    

    return 0;
}


/*....................................................*/



int search(){                                                                 //this is a program to search a number in an array
	 int numbers[5], i ,search_key;

	cout<<"Simple C++ Example Program for Simple Searching In Array\n";

	// Read Input
    for (i = 0; i < 5; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }
    
    cout<<"Enter the key\n";
    cin>>search_key;
    
    /*  Simple Search with Position */
	for (i = 0; i < 5; i++)
    {
		if(numbers[i] == search_key)
		{
			cout<<"Search Element Found . Position Is :"<< (i+1) <<" \n";
			break;
		}
		if(i == 5 - 1)
		{
			cout<<"Search Element is not in Array.\n";
		}
    }
    
}
/*.................................................................................*/

int sort(){                                                                       //this is program to sort an array.

	 int numbers[5], i ,j ,temp;

	cout<<"Simple C++ Example Program for Sorting (Asending Order) In Array\n";

	// Read Input
    for (i = 0; i < 5; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }
        
    // Array Sorting - Asensding Order
    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    
    cout<<"Sorting Order Array: \n";
    for (i = 0; i < 5; ++i)
        cout<<numbers[i]<<endl;
}


/*................................................................*/

int biggestno(){                                                             //Gives the biggest number in an array.
	 int numbers[5], i, largest;

	cout<<"Find Largest or Biggest Number (Array) In C++ Example Program\n";

    for (i = 0; i < 5; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }

    largest = numbers[0];
    for (i = 1; i < 5; i++)
    {
        if (largest < numbers[i])
            largest = numbers[i];
    }
    cout<<"\nLargest /Biggest Number Is : "<<largest<<endl;
    
}


/*..................................................*/


int main()
{
   int choice;
             int option=-1;
             while(option)
               {
                 printf("1.Largest number in array. 2.Sorting an array 3.Searching a number in aaray, 4.Matrix addition, 5.Exit\n");
                 printf("Enter your choice :- ");
                 scanf("%d",&choice);
                 switch(choice)
                 {
                   case 1: biggestno() ;
                           break;
                   case 2: sort();
                           break;
                   case 3: search();
                           break;
                   case 4: madd();
				           break;
                   
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");
                 scanf("%d",&option);
               }
    
    return 0;
}
