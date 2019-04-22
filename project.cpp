#include <iostream>

using namespace std; 
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
                 printf("1.Largest number in array. 2.Sorting an array 3.Searching a number in aaray 4.Exit\n");
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
                           
                   
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");
                 scanf("%d",&option);
               }
    
    return 0;
}
