#include<iostream>
using namespace std;
int main()
{

    /* infix func
    cout << "\nUsing Infix template: ( A + B = )\n";
        cout << "Please enter First digit\n";
        cin >> F;
        cout << "Please enter second digit\n";
        cin >> L;
        cout << "Select Arithmic: 1(+).  2(-).  3(*).  4(/). \n";
        cin >> Pass;

        switch (Pass)
        {
        case 1:
            Temp = F + L;
            break;
        case 2:
            Temp = F - L;
            break;
        case 3:
            Temp = F * L;
            break;
        case 4:
            Temp = F / L;
            break;
        default:
            cout << "Please enter 1-4\n";
        }

        if (Pass = 1)
        {
            cout << F << " + " << L << "\n";
        }
        else if (Pass = 2)
        {
            cout << F << " - " << L << "\n";
        }
        else if (Pass = 3)
        {
            cout << F << " * " << L << "\n";
        }
        else if (Pass = 4)
        {
            cout << F << " / " << L << "\n";
        }
        cout << Temp << "\n";


   
   
   //if (Expression.at(1) = 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 0)
              //{
              //  cout << "Please rewrite your expression! Single Digits Only\n";
               // Precheck.push(0);
              //  break;
            //  }

    */
}







////////////////////////////////////////////////






void Infix(int F, int L, int Pass, int Temp, string EQUA)
{
    cout << "\n\n  Using Infix; Please Enter Expression\n";
    cin >> EQUA;
    

    


}



int main()
{   
    string EQUA, Expression;
    int Choice, F, M, L, Pass, Temp;
    stack<int> Precheck;

    Precheck.push(0);
    while (1)
    {
        cout << "\n";
        cout << "\tMenu\t\n";
        cout << "1. infix\n";
        cout << "2. Prefix\n";
        cout << "3. Postfix\n";
        cout << "4. Exit\n";
        cin >> Choice;

       switch (Choice)
       {
       case 1:
            //PRECHECK
            if (Precheck.top() == 1)
                {
                    cout << "Infix was just used!\n\n";
                    break;
                }

            else if (Precheck.top() != 1)
                {
                    Precheck.push(1);
                }
            
            Infix(F, L, Pass, Temp);

        break;
       case 2:  
                if (Precheck.top() == 2)
                {
                    cout << "Prefix was just used!\n\n";
                    break;
                }
                else if (Precheck.top() != 2)
                {
                Precheck.push(1);
                
                cout << "Enter";
                

                }
                break;

        case 3:
                if (Precheck.top() == 3)
                {
                    cout << "Postfix was just used!\n\n";
                    break;
                }
                else if (Precheck.top() != 3)
                {
                Precheck.push(3);
                
                cout << "Enter Expression\n";
                cin >> Expression;

                if (Expression.at(1) = 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9)
                {
                    cout << "Please rewrite your expression! Single Digits Only\n";
                    Precheck.push(0);
                    break;
                }
                
                    

                }
                break;

        case 4:
            exit(0);      
       default:
            cout << "Please Choose 1, 2, 3 or 4\n";
       }
    }