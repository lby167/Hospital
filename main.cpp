#include<iostream>
using namespace std;

//Function prototypes
void getChoice(char &);
double total(int,double,double,double);
double total(double,double);

int main()
{
    
    char selection;//inpatient or outpatient selection
    int days;//days stay in hospital if inpatient
    double dailyRate;//hospital daily rate for inpatient
    double mediCharges;//medication charges
    double service;//hospital service fee
    
    
    getChoice(selection);
    
    //process the inpatient or outpatient selection
    switch(selection)
    {
        case 'I':
        case 'i': cout<<" How many days stay ? "; //ask user input days stay in hospital for inpatient
                  cin>>days;
            
                 //not accept negative number for days
                  while(days<=0)
                  {
                      cout<<"Please enter positive integer for days. ";
                      cin>>days;
                  }
                  //ask daily rate of hospital
                  cout<<"Daily rate of hospital?";
                  cin>>dailyRate;
                  //not accept negative number for daily rate
                  while(dailyRate<=0)
                  {
                    cout<<"Please enter positive integer for daily rate. ";
                    cin>>dailyRate;
                  }
                  //ask the midication charges fee
                  cout<<"What is the medication charges ?";
                  cin>>mediCharges;
                  // not accept the negative number for medication chagre
                  while(mediCharges<0)
                 {
                   cout<<"Please enter positive value for medication charges ";
                   cin>>mediCharges;
                 }
                  //ask to input the service charge
                  cout<<"What is service charges?";
                  cin>>service;
                  //not accept the negative number for service charges
                  while(service<0)
                  {
                     cout<<"Please enter positive integer for service fee. ";
                     cin>>service;
                  }
                  //show  total charge
                  cout<<"The total charge is "<<endl;
            
                  cout<<total(days,dailyRate,mediCharges,service)<<endl;
            
                  break;
        //process if outpatient
        case 'O':
        case 'o':cout<<"What is the medication charges ?";
                 cin>>mediCharges;
                 //not accept the negative value for medication charge
                 while(mediCharges<0)
                 {
                   cout<<"Please enter positive value for medication charges ";
                   cin>>mediCharges;
                }
                //ask the serice charges
                cout<<"What is services charges?";
                cin>>service;
                //not accept the service fee
                while(service<0)
               {
                   cout<<"Please enter positive integer for service fee. ";
                   cin>>service;
                }
                 //show the total charge
                 cout<<"The total charge is "<<endl;
                 cout<<total(mediCharges,service)<<endl;
                 break;
            
    }
    return 0;
}
            
    //inpatient or outpatient selection function
    void getChoice(char &letter)
    {
        
        cout<<"Is the patient an inpatient or outpatient?"<<endl;
        cout<<"If inpatient enter 'I' if outpatient enter 'O'."<<endl;
        cin>>letter;
        
        while(letter != 'I' && letter != 'i' && letter!= 'O' && letter != 'o')
        {
            cout<<"Please enter I or N: ";
            cin>>letter;
        }

    }

//inpatient function for total charge
  double total(double mediCharges,double service)
{
    
    return mediCharges+service;

}

//outpatient function for total charge
double total(int days,double dailyRate,double mediCharges,double service)
{
    return days*dailyRate+mediCharges+service;
    
    
}
