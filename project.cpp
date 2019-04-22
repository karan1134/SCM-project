#include <iostream>

using namespace std; 
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
                 printf("1.Largest number in array. 2.Sorting an array 3.Exit\n");
                 printf("Enter your choice :- ");
                 scanf("%d",&choice);
                 switch(choice)
                 {
                   case 1: biggestno() ;
                           break;
                    case 2: sort();
                           break;
                   
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");
                 scanf("%d",&option);
               }
    
    return 0;
}
