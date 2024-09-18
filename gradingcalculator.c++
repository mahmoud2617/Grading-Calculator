#include<iostream>
using namespace std;

int main()
{
  
    int x;
    int y;
    string z;
    int n;
    float w;
   

    cout<<"Enter the number of the system type you want to convert from:\n";
    cout<<"1.Letter Grade "<<endl<<"2. Percent Grade"<<endl<<"3. 4.0 scale"<<endl<<"Your choice: ";
    cin>>x;
 



    if (x==1)
    {cout<<"\nEnter the number of the system type you want to convert in:"<<endl;
    cout<<"1. Percent Grade"<<endl<<"2. 4.0 scale"<<endl<<"Your choice: ";
    cin>>y;



        if (y==1)
        {
            cout<<"\nEnter your Letter Grade: ";
            cin>>z;
            
            if (z=="A")
            {cout<<"\tYour Percent Grade is between  93% : 100% "<<endl<<"\tGood Luck";}
            
            else if (z=="A-")
            {cout<<"\tYour percent Grade is between  90% : 92% "<<endl<<"\tGood Luck";}
           
            else if (z=="B+")
            {cout<<"\tYour percent Grade is between  87% : 89% "<<endl<<"\tGood Luck";}
           
            else if (z=="B")
            {cout<<"\tYour percent Grade is between  83% : 86% "<<endl<<"\tGood Luck";}
           
            else if (z=="B-")
            {cout<<"\tYour percent Grade is between  80% : 82% "<<endl<<"\tGood Luck";}
          
            else if (z=="C+" || z=="c+")
            {cout<<"\tYour percent Grade is between  77% : 79% "<<endl<<"\tGood Luck";}
         
            else if (z=="C" || z=="c")
            {cout<<"\tYour percent Grade is between  73% : 76% "<<endl<<"\tGood Luck";}
         
            else if (z=="C-" || z=="c-")
            {cout<<"\tYour percent Grade is between  70% : 72% "<<endl<<"\tGood Luck";}
           
            else if (z=="D+")
            {cout<<"\tYour percent Grade is between  67% : 69% "<<endl<<"\tGood Luck";}
         
            else if (z=="D")
            {cout<<"\tYour percent Grade is between  63% : 66% "<<endl<<"\tGood Luck";}
           
            else if (z=="D-")
            {cout<<"\tYour percent Grade is between  60% : 62% "<<endl<<"\tGood Luck";}
           
            else if (z=="F" || z=="f")
            {cout<<"\tYour percent Grade is below 60% "<<endl<<"\tGood Luck";}

            else
            {cout<<"\tNOT FOUND";}
        }
  
  
         else if (y==2)
    
        {cout<<"\nEnter your Letter Grade: ";
         cin>>z;

            if (z=="A" || z=="A")
            {cout<<"\tYour GPA is 4.0 "<<endl<<"\tGood Luck";}

            else if (z=="A-")
            {cout<<"\tYour GPA is 3.7"<<endl<<"\tGood Luck";}
            
            else if (z=="B+")
            {cout<<"\tYour GPA is 3.3"<<endl<<"\tGood Luck";}
           
            else if (z=="B")
            {cout<<"\tYour GPA is 3.0 "<<endl<<"\tGood Luck";}
          
            else if (z=="B-")
            {cout<<"\tYour GPA is 2.7 "<<endl<<"\tGood Luck";}
          
            else if (z=="C+" || z=="c+")
            {cout<<"\tYour GPA is 2.3"<<endl<<"\tGood Luck";}
         
            else if (z=="C" || z=="c")
            {cout<<"\tYour GPA is 2.0"<<endl<<"\tGood Luck";}
         
            else if (z=="C-" || z=="c-")
            {cout<<"\tYour GPA is 1.7 "<<endl<<"\tGood Luck";}
           
            else if (z=="D+")
            {cout<<"\tYour GPA is 1.3 "<<endl<<"\tGood Luck";}
         
            else if (z=="D")
            {cout<<"\tYour GPA is 1.0 "<<endl<<"\tGood Luck";}
          
            else if (z=="D-")
            {cout<<"\tYour GPA is 0.7 "<<endl<<"\tGood Luck";}
          
            else if (z=="F" || z=="f")
            {cout<<"\tYour GPA is 0 "<<endl<<"\tGood Luck";}
            
            else 
            {cout<<"\tNOT FOUND";}
        }
         }



         else if (x==2)
         {cout<<"\nEnter the number of the system type you want to convert in:"<<endl;
         cout<<"1. Letter Grade"<<endl<<"2. 4.0 scale"<<endl<<"Your choice: ";
         cin>>y;
      
            if (y==1)
            {cout<<"\nEnter your Percent Grade: ";
            cin>>n;
            
            if (n<=100 && n>=93)
            {cout<<"\tYour Letter Grade is A"<<endl<<"\tGood luck";}
            
            else if (n<=92 && n>=90)
            {cout<<"\tYour Letter Grade is A-"<<endl<<"\tGood luck";}
            
            else if (n<=89 && n>=87)
            {cout<<"\tYour Letter Grade is B+"<<endl<<"\tGood luck";}
            
            else if (n<=86 && n>=83)
            {cout<<"\tYour Letter Grade is B"<<endl<<"\tGood luck";}
            
            else if (n<=982 && n>=80)
            {cout<<"\tYour Letter Grade is B-"<<endl<<"\tGood luck";}
            
            else if (n<=79 && n>=77)
            {cout<<"\tYour Letter Grade is C+"<<endl<<"\tGood luck";}
            
            else if (n<=76 && n>=73)
            {cout<<"\tYour Letter Grade is C"<<endl<<"\tGood luck";}
            
            else if (n<=72 && n>=70)
            {cout<<"\tYour Letter Grade is C-"<<endl<<"\tGood luck";}
            
            else if (n<=69 && n>=67)
            {cout<<"\tYour Letter Grade is D+"<<endl<<"\tGood luck";}
            
            else if (n<=66 && n>=63)
            {cout<<"\tYour Letter Grade is D"<<endl<<"\tGood luck";}
            
            else if (n<=62 && n>=60)
            {cout<<"\tYour Letter Grade is D-"<<endl<<"\tGood luck";}
            
            else if (n<=59 && n>=0)
            {cout<<"\tYour Letter Grade is F"<<endl<<"\tGood luck";}
            
            else 
            {cout<<"\tNOT FOUND";}
           }
 
          else if (y==2)
         {cout<<"\nEnter your Percent Grade: ";
         cin>>n;
          
            if (n<=100 && n>=93)
            {cout<<"\tYour GPA is 4.0"<<endl<<"\tGood luck";}
            
            else if (n<=92 && n>=90)
            {cout<<"\tYour GPA is 3.7"<<endl<<"\tGood luck";}
            
            else if (n<=89 && n>=87)
            {cout<<"\tYour GPA is 3.3"<<endl<<"\tGood luck";}
            
            else if (n<=86 && n>=83)
            {cout<<"\tYour GPA is 3.0"<<endl<<"\tGood luck";}
            
            else if (n<=82 && n>=80)
            {cout<<"\tYour GPA is 2.7"<<endl<<"\tGood luck";}
            
            else if (n<=79 && n>=77)
            {cout<<"\tYour GPA is 2.3"<<endl<<"\tGood luck";}
            
            else if (n<=76 && n>=73)
            {cout<<"\tYour GPA is 2.0"<<endl<<"\tGood luck";}
            
            else if (n<=72 && n>=70)
            {cout<<"\tYour GPA is 1.7"<<endl<<"\tGood luck";}
            
            else if (n<=69 && n>=67)
            {cout<<"\tYour GPA is 1.3"<<endl<<"\tGood luck";}
            
            else if (n<=66 && n>=63)
            {cout<<"\tYour GPA is 1.0"<<endl<<"\tGood luck";}
            
            else if (n<=62 && n>=60)
            {cout<<"\tYour GPA is 0.7"<<endl<<"\tGood luck";}
            
            else if (n<=59 && n>=0)
            {cout<<"\tYour GPA is 0"<<endl<<"\tGood luck";}
            
            else 
            {cout<<"\tNOT FOUND";}
         }
    }


         else if (x==3)
        {cout<<"\nEnter the number of the system type you want to convert in:"<<endl;
         cout<<"1.Letter Grade "<<endl<<"2. Percent Grade"<<endl<<"Your choice: ";
         cin>>y;

          if(y==1)
          {cout<<"\nEnter your GPA: ";
           cin>>w;

            if(w==4.0)
            {cout<<"\tYour Letter Grade is A"<<endl<<"\tGood luck";}
            
            else if(w==3.7)
            {cout<<"\tYour Letter Grade is A-"<<endl<<"\tGood luck";}

            
            else if(w==3.3)
            {cout<<"\tYour Letter Grade is B+"<<endl<<"\tGood luck";}

            
            else if(w==3.0)
            {cout<<"\tYour Letter Grade is B"<<endl<<"\tGood luck";}

            
            else if(w==2.7)
            {cout<<"\tYour Letter Grade is B-"<<endl<<"\tGood luck";}

            
            else if(w==2.3)
            {cout<<"\tYour Letter Grade is C+"<<endl<<"\tGood luck";}

            
            else if(w==2.0)
            {cout<<"\tYour Letter Grade is C"<<endl<<"\tGood luck";}

            
            else if(w==1.7)
            {cout<<"\tYour Letter Grade is C-"<<endl<<"\tGood luck";}

            
            else if(w==1.3)
            {cout<<"\tYour Letter Grade is D+"<<endl<<"\tGood luck";}

            
            else if(w==1.0)
            {cout<<"\tYour Letter Grade is D"<<endl<<"\tGood luck";}

            
            else if(w==0.7)
            {cout<<"\tYour Letter Grade is D-"<<endl<<"\tGood luck";}

            
            else if(w==0)
            {cout<<"\tYour Letter Grade is F"<<endl<<"\tGood luck";}

            else
            {cout<<"\tNOT FOUND";}
        }


        else if(y==1)
        {cout<<"\nEnter your GPA: ";
         cin>>w;

             if(w==4.0)
            {cout<<"\tYour Percent Grade is between  93% : 100%  "<<endl<<"\tGood luck";}
            
            else if(w==3.7)
            {cout<<"\tYour percent Grade is between  90% : 92% "<<endl<<"\tGood luck";}

            
            else if(w==3.3)
            {cout<<"\tYour Percent Grade is between  87% : 89%  "<<endl<<"\tGood luck";}

            
            else if(w==3.0)
            {cout<<"\tYour Percent Grade is between  83% : 86%  "<<endl<<"\tGood luck";}

            
            else if(w==2.7)
            {cout<<"\tYour Percent Grade is between  80% : 82%  "<<endl<<"\tGood luck";}

            
            else if(w==2.3)
            {cout<<"\tYour Percent Grade is between  77% : 79%  "<<endl<<"\tGood luck";}

            
            else if(w==2.0)
            {cout<<"\tYour Percent Grade is between  73% : 76%  "<<endl<<"\tGood luck";}

            
            else if(w==1.7)
            {cout<<"\tYour Percent Grade is between  70% : 72%  "<<endl<<"\tGood luck";}

            
            else if(w==1.3)
            {cout<<"\tYour Percent Grade is between  67% : 69%  "<<endl<<"\tGood luck";}

            
            else if(w==1.0)
            {cout<<"\tYour Percent Grade is between  63% : 66%  "<<endl<<"\tGood luck";}

            
            else if(w==0.7)
            {cout<<"\tYour Percent Grade is between  60% : 62%  "<<endl<<"\tGood luck";}

            
            else if(w==0)
            {cout<<"\tYour percent Grade is below 60% "<<endl<<"\tGood luck";}

            else
            {cout<<"\tNOT FOUND";}
        }

    } 
 

    else
    {cout<<"\tNOT FOUND";}
  
  

    return 0;
}