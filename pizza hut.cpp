// pizza hutt.....
#include<iostream>
#include<conio.h>

using namespace std;

class Domino{
	 char i = 0;
    float price[20];            // to store the prices of selected items
    char *item[20];             // to store the name of selected item
    int k = 0;                  // to store the total no of items ordered yet
    public:
    	
void coustmerpage();
void firstPage();               // method which prints the first page

void menuPage();                // method which prints menu after first page

void pizzaPage();  // pizzapage if pizza is
                                                    // selected from menu
                                                    // page..variables which
                                                    // will
                          // store selected item name and their cost are
                          // passed as arguments..

void sidesPage();  // if sides is selected
                                                    // from menu page

void drinksPage(); // if drinks is selected
                                                    // from menu page

void orderListPage();  // method to display
                                                        // the order being
                                                        // placed
                        // will extract price and item names from
                        // arrays whose reference are passed as
                        // arguments..last index for arrays is k

void exitPage();                // method which prints the exiting message
};

void Domino::coustmerpage()
{

    firstPage();                // first page displayed
    getch();                    // will continue only when some key is pressed

    while (i != '5')
    {                           // i==5 is exiting situation
        menuPage();             // menu displayed

        cout<<"\n\n\n\n\n\tPlease Enter Your Selection <y/n>:";
        cin>>i;        // choice received in char i

        // this loop will be repeated until a valid choice comes
        while (i != '1' && i != '2' && i != '3' && i != '4' && i != '5')
        {
            menuPage();
            cout<<"\n\n\n\n\n\tPlease Enter Valid Selection : ";
            cin>>i;
        }

        // switch for valid choice received in i
        switch (i)
        {
            // pizza is choosed
        case '1':
            {
                // this method will display pizza choices as well as will
                // receive order and will update arrays price and item
                // accordingly..k will have the index for next updation
                pizzaPage();
                break;
            }


            // sides is choosed
        case '2':
            {
                // similarly like pizzapage,this will display sides choices
                // and will place the order in arrays,will update k
                sidesPage();
                break;
            }


            // drinks is choosed from menu page
        case '3':
            {
                // same as above
                drinksPage();
                break;
            }


            // order list is choosed
        case '4':
            {
                orderListPage();  // order list displayed
                break;
            }

        }                       // switch finished

        // while loop will b continued if i!=5..will again pop up menu page
    }

    exitPage();                 // out of while if i==5..exiting message
    getch();
    
}

void Domino::firstPage()
{
	  int i, j;
    // clrscr();

    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    for (j = 0; j < 3; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t\t  Domino   Pizza  House  \t\t**\t";

    for (j = 0; j < 3; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";
    cout<<"\n\t";

    for (i = 0; i < 58; i++)
        cout<<"*";


    for (j = 0; j < 5; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t     Customer  Order  Billing  System  \t\t**";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t\t  Press <Enter> to continue   \t\t**";

    for (j = 0; j < 5; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }


    cout<<"\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";
}

void Domino::menuPage()
{
	 int i, j;
    


   cout<<"\n\n\n\n\n\n\n\n\n\n\n\t";
    for (i = 0; i < 58; i++)
       cout<<"*";

    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t\t  Menu  Selection  \t\t\t**\t";

    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t";
    for (i = 0; i < 58; i++)
       cout<<"*";

    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t\t  1. Pizzas  \t\t\t\t**\t";
    for (j = 0; j < 1; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t\t  2. Sides  \t\t\t\t**\t";
    for (j = 0; j < 1; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t\t  3. Drinks  \t\t\t\t**\t";
    for (j = 0; j < 1; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t\t  4. Order List  \t\t\t**\t";
    for (j = 0; j < 1; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t\t  5. Exit  \t\t\t\t**\t";

    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t";
    for (i = 0; i < 58; i++)
       cout<<"*";
    

}

void Domino::pizzaPage()
{
	 int i, j;
    char ch;
    float p[20];
    char *itm[20];
    int k;

    // display of pizza menu starts
    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    cout<<"\n\n\n\n\n\n\n\n\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t  Menu  Selection  >>  Pizzas\t\t\t**\t";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    for (j = 0; j < 3; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t 1.Meat Lovers \t\t $ 80.75 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t 2.Vege Delight \t $ 65.50 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t 3.Tauranga Special \t $ 75.00 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";


    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
    // display of pizza menu ends



    // order receiving
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;
    cout<<"\n\n\n\tDo you want to order other Pizza <y/n> : ";
    cin>>ch;           // y if want to order more from pizzapage

    //getch();


    // switch for pizza menu
    switch (i)
    {
    case 1:
        {
            // if meat lovers selected,p[k] will contain price
            // itm[k] will contain item name

            p[k++] = 80.75 * j; // j is the no of meat lovers pizza ordered
            itm[k++] = "Meat Lovers";
            break;
        }

    case 2:
        {
            // same as above if vege delight selected

            p[k++] = 65.50 * j;
            itm[k++] = "Vege Delight";
            break;
        }

    case 3:
        {
            // same if tarunga pizza selected
            p[k++] = 50.00 * j;
            itm[k++] = "Tauranga Special";
            break;
        }
    }

    // if want to order more pizza then pop up pizza menu again
    if (ch == 'y')
    {
        pizzaPage();
    }

    // if not then return to main method
    else if (ch == 'n')
    {
        return;
    }

}

void Domino::drinksPage()
{
	 char ch;
    int i, j;
    float p[20];
    char *itm[20];
	 int k;
    // clrscr();

    // refer pizza page for details
    // starts $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

   cout<<"\n\n\n\n\n\n\n\n\n\t";
    for (i = 0; i < 58; i++)
       cout<<"*";

    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t  Menu  Selection  >>  Drinks\t\t\t**\t";

    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t";
    for (i = 0; i < 58; i++)
       cout<<"*";

    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    for (j = 0; j < 3; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t 1.Water    \t\t $ 25.20 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t 2.Coca Cola \t\t $ 45.50 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t**\t 3.L & P   \t\t $ 40.00 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
       cout<<"\n\t**";
        for (i = 0; i < 54; i++)
           cout<<" ";
       cout<<"**";
    }

   cout<<"\n\t";
    for (i = 0; i < 58; i++)
       cout<<"*";

    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    // same as pizzapage
   cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
   cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;
   cout<<"\n\n\n\tDo you want to order other Pizza <y/n> : ";
    cin>>ch;

   // getch();
    switch (i)
    {
    case 1:
        {
            p[k++] = 25.20 * j;
            itm[k++] = "Water";
            break;
        }

    case 2:
        {
            p[k++] = 45.50 * j;
            itm[k++] = "Coca Cola";
            break;
        }

    case 3:
        {
            p[k++] = 40.00 * j;
            itm[k++] = "L & P";
            break;
        }
    }

    if (ch == 'y')
    {
        drinksPage();
    }
    else if (ch == 'n')
    {
        return;
    }
}

void Domino::orderListPage()
{
	 int i, j, z;
    float sum = 0;              // will store the total cost
    float p[20]; 
     char *itm[20]; 
     int k;


    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
    cout<<"\n\n\n\n\n\n\n\n\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t\t  Your  Order  List  \t\t\t**\t";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t  Price \t\t  Item Name \t\t**\t";
    for (j = 0; j < 3; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$



    // this loop is extracting price and item names from arrays p and itm
    // and displaying them...loop will move k times..p,itm,k are received as
    // arguments

    for (z = 0; z < k; z++)
    {
        cout<<"\n\t**\t\t\t\t**\t"<< (z + 1)<< p[z]<< itm[z];
        sum = sum + p[z];
        for (j = 0; j < 2; j++)
        {
            cout<<"\n\t**";
            for (i = 0; i < 54; i++)
                cout<<" ";
            cout<<"**";
        }
    }



    cout<<"\n\n\n\n\t\tYour Total Amount is : $%0.2f\t", sum;

    return;

}

void Domino::exitPage()
{
	 int i, j;
    


    // only displaying part
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    for (j = 0; j < 3; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t\t Exiting Program, Bye Bye  \t\t**\t";

    for (j = 0; j < 3; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    return;



    // this method is only to display menu
}

void Domino::sidesPage()
{
	 char ch;
    int i, j;
    float p[20];
	char *itm[20];
	 int k;



    // same as above
    // display part starts
    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


    cout<<"\n\n\n\n\n\n\n\n\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t  Menu  Selection  >>  Sides\t\t\t**\t";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t  Item Name \t\t Price \t\t\t**\t";
    for (j = 0; j < 3; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t 1.Fries    \t\t $ 100.00 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t 2.Chicken Wings \t $ 100.50 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t**\t 3.Chicken Nuggets \t $ 150.00 \t\t**\t";
    for (j = 0; j < 2; j++)
    {
        cout<<"\n\t**";
        for (i = 0; i < 54; i++)
            cout<<" ";
        cout<<"**";
    }

    cout<<"\n\t";
    for (i = 0; i < 58; i++)
        cout<<"*";

    // $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
    // display of menu part ends


    // order receiving
    cout<<"\n\n\n\n\tPlease Enter Your Selection \t       : ";
    cin>>i;
    cout<<"\n\n\n\tQuantity\t\t\t       : ";
    cin>>j;
    cout<<"\n\n\n\tDo you want to order other Pizza <y/n> : ";
    cin>>ch;


    getch();
    // same as in pizzapage
    switch (i)
    {
    case 1:
        {
            p[k++] = 100.00 * j;
            itm[k++] = "Fries";
            break;
        }

    case 2:
        {
            p[k++] = 100.50 * j;
            itm[k++] = "Chicken Wings";
            break;
        }

    case 3:
        {
            p[k++] = 150.00 * j;
            itm[k++] = "Chicken Nuggets";
            break;
        }
    }

    // same as in pizza page
    if (ch == 'y')
    {
        sidesPage();
    }
    else if (ch == 'n')
    {
        return;
    }
}
int main()
{
	Domino d1;
	d1.coustmerpage();
	d1.firstPage();
	d1.menuPage();
	d1.pizzaPage();
	d1.drinksPage();
	d1.sidesPage();
	d1.orderListPage();
	d1.exitPage();

	return 0;
}
