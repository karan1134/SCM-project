#include <iostream>

using namespace std;


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
                 printf("1.Largest number in array. 2.xyz 3.Exit\n");
                 printf("Enter your choice :- ");
                 scanf("%d",&choice);
                 switch(choice)
                 {
                   case 1: biggestno() ;
                           break;
                   
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");
                 scanf("%d",&option);
               }
    
    return 0;
}
