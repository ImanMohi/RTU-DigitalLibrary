#include<iostream>
#include<fstream>
#include<string.h>
#include<ctype.h>
using namespace std;

/*SQL COMMANDS ERROR CHECKING (MINI-INTERPRETER)
As the name of this project suggests it basically reads SQL
commands from a text files and checks for any syntax errors
and if an error is found it is shown on the screen. I have done
only three major SQL commands namely CREATE TABLE,
ALTER TABLE, and INSERT INTO. This program shows what
an interpreter actually does in the background.*/

int error2(char* ch)    //Function to find Correct Constraints
{
    int flag=1;
    char array[20][20]= {"Primary","Unique","Not","Null","Key","Foreign"};  //2D Array Storing the Constraints
    for(int i=0; i<6; i++)  //Loop for Checking if the word is Correct or not
    {
        if(!strcasecmp(ch,array[i]))
        {
            flag=0;
            break;
        }
    }
    return flag;
}


int error3(char* ch)    //Function to find Correct Datatypes
{
    int flag=1;
    char array[20][20]= {"varchar","char","decimal","int","time","date"};   //2D Array Storing the Datatypes
    for(int i=0; i<6; i++)  //Loop for Checking if the word is Correct or not
    {
        if(!strcasecmp(ch,array[i]))
        {
            flag=0;
            break;
        }
    }
    return flag;
}


void error()    //Finding Error in the File
{
    char ch[30];
    int flag=0,flag1=0,flag2=0;
    ifstream fin;   //Opening a File
    fin.open("output.txt");
    if(!fin)    //Checking if the File is Opned or not
    {
        cout<<"Error!!! Can't Open File'"<<endl;
        return;
    }
    fin>>ch;    //Keyword
//''''''''''''''''''''''''''''''''''''''Create''''''''''''''''''''''''''''''''''''''''''''''
    if(ch[0]=='c'||ch[0]=='C')
    {
        cout<<ch<<" ";
        if(!strcasecmp(ch,"create"))
        {
            fin>>ch;    //Keyword
            cout<<ch<<" ";
            if(!strcasecmp(ch,"table"))
            {
                fin>>ch;    //Table Name
                cout<<ch<<" ";
                fin>>ch;    //Punctuator (
                cout<<ch;
                if(ch[0]!='(')
                {
                    flag=1;
                    cout<<"<---Your Error is Here....."<<endl;
                }
            }
            else
            {
                flag=1;
                cout<<"<---Your Error is Here....."<<endl;
            }
        }
        else
        {
            flag=1;
            cout<<"<---Your Error is Here....."<<endl;
        }
        while(!flag)
        {
            fin>>ch;    //Column Name
            cout<<ch<<" ";
            if(ch[0]==';')
            {
                break;
            }
            else if(ch[0]==','||ch[0]==')'||ch[0]=='}'||ch[0]==']'||ch[0]=='/'||ch[0]==':'||ch[0]=='.')	//Checking if the Puncuator is Correct or not
            {
                flag=1;
                cout<<"<---Your Error is Here....."<<endl;
                break;
            }
            fin>>ch;    //Datatype
            cout<<ch;
            flag2=error3(ch);   //Checking if the Datatype is Valid or not
            if(flag2==1)
            {
                cout<<"<---Your Error is Here....."<<endl;
                break;
            }
            fin>>ch;    //Puctuator (
            cout<<ch;
            if(ch[0]=='(')
            {
                fin>>ch;    //Size
                cout<<ch;
                if(!isdigit(ch[0])) //Checking if the Size is Valid or not
                {
                    flag=1;
                    cout<<"<---Your Error is Here....."<<endl;
                }
                fin>>ch;    //Punctuator )
                cout<<ch;
                if(ch[0]==')')
                {
                    fin>>ch;    //First Constraint
                    cout<<ch<<" ";
                    if(isalpha(ch[0]))
                    {
                        flag1=error2(ch);   //Checking if the Constraint is Correct or not
                        if(flag1==1)
                        {
                            cout<<"<---Your Error is Here....."<<endl;
                            break;
                        }
                        fin>>ch;    //Second constraint
                        cout<<ch<<" ";
                        if(isalpha(ch[0]))
                        {
                            flag1=error2(ch);   //Checking if the Constraint is Correct or not
                            if(flag1==1)
                            {
                                cout<<"<---Your Error is Here....."<<endl;
                                break;
                            }
                            fin>>ch;
                            cout<<ch;   //Punctuator , or )
                            if(ch[0]!=',')
                            {
                                if(ch[0]!=')')
                                {
                                    flag=1;
                                    cout<<"<---Your Error is Here....."<<endl;
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        if(ch[0]!=',')  // Punctuator , or )
                        {
                            if(ch[0]!=')')
                            {
                                flag=1;
                                cout<<"<---Your Error is Here....."<<endl;
                                break;
                            }
                        }
                    }
                }
                else
                {
                    flag=1;
                    cout<<"<---Your Error is Here....."<<endl;
                    break;
                }
            }
            else
            {
                flag=1;
                cout<<"<---Your Error is Here....."<<endl;
                break;
            }
        }
    }
//'''''''''''''''''''''''''''''''''''''''''''''INSERT'''''''''''''''''''''''''''''''''''''''''''''''''''
    else
    {
        if(ch[0]=='i'||ch[0]=='I')
        {
            cout<<ch<<"  ";
            if(!strcasecmp(ch,"insert"))
            {
                fin>>ch;    //Keyword
                cout<<ch<<"  ";
                if(!strcasecmp(ch,"into"))
                {
                    fin>>ch;
                    cout<<ch<<"  "; //Table Name
                    fin>>ch;
                    cout<<ch<<"  "; //Punctuator (
                    if(!strcasecmp(ch,"values"))
                    {
                        fin>>ch;
                        cout<<ch<<"  ";
                        if(ch[0]!='(')
                        {
                            flag=1;
                            cout<<"<---Your Error is Here....."<<endl;
                        }
                    }
                    else
                    {
                        fin>>ch;
                        cout<<ch<<"  ";
                        if(!strcasecmp(ch,"values"))
	                    {
	                        fin>>ch;
	                        cout<<ch<<"  ";
	                        if(ch[0]!='(')
	                        {
	                            flag=1;
	                            cout<<"<---Your Error is Here....."<<endl;
	                        }
	                    }
	                    else
	                    {
	                    	flag=1;
                            cout<<"<---Your Error is Here....."<<endl;
						}
                    }
                }
                else
                {
                    flag=1;
                    cout<<"<---Your Error is Here....."<<endl;
                }
            }
            else
            {
                flag=1;
                cout<<"<---Your Error is Here....."<<endl;
            }
            while(!flag)    //Running the loop till the Flag=1(ie there is an error)
            {
                fin>>ch;
                cout<<ch<<"  ";
                if(ch[0]==';')  //Column Name
                {
                    break;
                }
                else if(ch[0]==','||ch[0]==')'||ch[0]=='}'||ch[0]==']'||ch[0]=='/'||ch[0]==':'||ch[0]=='.')	//Checking if the Puncuator is Correct or not
                {
                    flag=1;
                    cout<<"<---Your Error is Here....."<<endl;
                    break;
                }
                if(isdigit(ch[0]))
                {
                    fin>>ch;    //Values of the Table
                    cout<<ch<<"  ";
                    if(ch[0]!=',')  //Checking if the Punctuator is Correct or not
                    {
                        if(ch[0]!=')')
                        {
                            flag=1;
                            cout<<"<---Your Error is Here....."<<endl;
                            break;
                        }
                    }
                }
                else
                {
                    if(ch[0]=='"')
                    {
                        fin>>ch;    //Value
                        cout<<ch<<"  ";
                        fin>>ch;    //Punctuator "
                        cout<<ch<<"  ";
                        if(ch[0]=='"')
                        {
                            fin>>ch;    //Values of the Table
                            cout<<ch<<"  ";
                            if(ch[0]!=',')  //Checking if the Punctuator is Correct or not
                            {
                                if(ch[0]!=')')
                                {
                                    flag=1;
                                    cout<<"<---Your Error is Here....."<<endl;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            flag=1;
                            cout<<"<---Your Error is Here....."<<endl;
                            break;
                        }
                    }
                    else
                    {	
                    	if(ch[0]=='\'')
                    	{
                    	   	fin>>ch;    //Value
                    	    cout<<ch<<"  ";
                   		    fin>>ch;    //Punctuator "
                    	    cout<<ch<<"  ";
                    	    if(ch[0]=='\'')
                    	    {
                        	    fin>>ch;    //Values of the Table
                            	cout<<ch<<"  ";
                            	if(ch[0]!=',')  //Checking if the Punctuator is Correct or not
                        	    {
                        	        if(ch[0]!=')')
                            	    {
                                	    flag=1;
                                    	cout<<"<---Your Error is Here....."<<endl;
                                	    break;
                                	}
                            	}
                        	}
                        	else
                        	{
                        	    flag=1;
		               	    	cout<<"<---Your Error is Here....."<<endl;
                            	break;
                        	}
                    	}
                    	else
                    	{
                    	    flag=1;
                   		    cout<<"<---Your Error is Here....."<<endl;
                    	    break;
                    	}
					}
                }
            }
        }
//'''''''''''''''''''''''''''''''''''''''''''ALTER'''''''''''''''''''''''''''''''''''''''''''''''''
        else
        {
            if(ch[0]=='a'||ch[0]=='A')
            {
                cout<<ch<<"  ";
                if(!strcasecmp(ch,"alter"))
                {
                    fin>>ch;    					//Keyword
                    cout<<ch<<"  ";
                    if(!strcasecmp(ch,"table"))
                    {
                        fin>>ch;    				//Table Name
                        cout<<ch<<"  ";
                        fin>>ch;   					 //Punctuator (
                        cout<<ch<<"  ";
                        if(!strcasecmp(ch,"add"))
                        {
                            fin>>ch;    			//Column Name
                            cout<<ch<<"  ";
                            fin>>ch;    			//Datatype
                            cout<<ch<<"  ";
                            flag2=error3(ch);   	//Checking if the Datatype is Correct or not
                            if(flag2==1)
                            {
                                cout<<"<---Your Error is Here....."<<endl;
                            }
                            fin>>ch;    			//Punctuator (
                            cout<<ch;
                            if(ch[0]=='(')
                            {
                                fin>>ch;   			 //Size
                                cout<<ch;
                                if(!isdigit(ch[0])) //Checking if the Size is Correct or not
                                {
                                    flag=1;
                                    cout<<"<---Your Error is Here....."<<endl;
                                }
                                fin>>ch;    		//Punctuator )
                                cout<<ch;
                                if(ch[0]==')')
                                {
                                    fin>>ch;    	//First Constraint
                                    cout<<ch<<" ";
                                    if(isalpha(ch[0]))
                                    {
                                        flag1=error2(ch);   //Checking if the the Constraint is Correct or not
                                        if(flag1==1)
                                        {
                                            cout<<"<---Your Error is Here....."<<endl;
                                        }
                                        fin>>ch;    //Second Constraint
                                        cout<<ch<<" ";
                                        if(isalpha(ch[0]))
                                        {
                                            flag1=error2(ch);   //Checking if the Constraint is Corrcet or not
                                            if(flag1==1)
                                            {
                                                cout<<"<---Your Error is Here....."<<endl;
                                            }
                                            fin>>ch;
                                            cout<<ch;
                                        }
                                    }
                                    else
                                    {
                                        if(ch[0]!=';')  //If the Punctuator is Correct or not
                                        {
                                            flag=1;
                                            cout<<"<---Your Error is Here....."<<endl;
                                        }
                                    }
                                }
                                else
                                {
                                    flag=1;
                                    cout<<"<---Your Error is Here....."<<endl;
                                }
                            }
                            if(ch[0]!=';')
                            {
                                if(ch[0]==','||ch[0]==')'||ch[0]=='}'||ch[0]==']'||ch[0]=='/'||ch[0]==':'||ch[0]=='.')	//Checking if the Puncuator is Correct or not
                                {
                                    flag=1;
                                    cout<<"<---Your Error is Here....."<<endl;
                                }
                                else
                                {
                                    flag=1;
                                    cout<<"<---Your Error is Here....."<<endl;
                                }
                            }
                        }
                        else
                        {
                            if(!strcasecmp(ch,"drop"))  //DROP
                            {
                                fin>>ch;    //Column Name
                                cout<<ch<<"  ";
                                fin>>ch;    //Puncuator ;
                                cout<<ch<<"  ";
                                if(ch[0]==','||ch[0]==')'||ch[0]=='}'||ch[0]==']'||ch[0]=='/'||ch[0]==':'||ch[0]=='.')	//Checking if the Puncuator is Correct or not
                                {
                                    flag=1;
                                    cout<<"<---Your Error is Here....."<<endl;
                                }
                            }
                            else
                            {
                                if(!strcasecmp(ch,"modify"))    //MODIFY
                                {
                                    fin>>ch;    //Column Name
                                    cout<<ch<<"  ";
                                    fin>>ch;    //Datatype
                                    cout<<ch<<"  ";
                                    flag2=error3(ch);   //Checking if the Datatype is Correct or not
                                    if(flag2==1)
                                    {
                                        cout<<"<---Your Error is Here....."<<endl;
                                    }
                                    fin>>ch;
                                    cout<<ch;
                                    if(ch[0]=='(')
                                    {
                                        fin>>ch;    //Size
                                        cout<<ch;
                                        if(!isdigit(ch[0])) //Checking if the size is correct or not
                                        {
                                            flag=1;
                                            cout<<"<---Your Error is Here....."<<endl;
                                        }
                                        fin>>ch;    //Puncuator (
                                        cout<<ch;
                                        if(ch[0]==')')
                                        {
                                            fin>>ch;    //First Constraint
                                            cout<<ch<<" ";
                                            if(isalpha(ch[0]))
                                            {
                                                flag1=error2(ch);
                                                if(flag1==1)
                                                {
                                                    cout<<"<---Your Error is Here....."<<endl;
                                                }
                                                fin>>ch;    //Second Constraint
                                                cout<<ch<<" ";
                                                if(isalpha(ch[0]))
                                                {
                                                    flag=error2(ch);
                                                    if(flag==1)
                                                    {
                                                        cout<<"<---Your Error is Here....."<<endl;
                                                    }
                                                    fin>>ch;
                                                    cout<<ch;
                                                }
                                            }
                                            else
                                            {
                                                if(ch[0]!=';')
                                                {
                                                    flag=1;
                                                    cout<<"<---Your Error is Here....."<<endl;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            flag=1;
                                            cout<<"<---Your Error is Here....."<<endl;
                                        }
                                    }
                                    if(ch[0]!=';')
                                    {
                                        if(ch[0]==','||ch[0]==')'||ch[0]=='}'||ch[0]==']'||ch[0]=='/'||ch[0]==':'||ch[0]=='.')	//Checking if the Puncuator is Correct or not
                                        {
                                            flag=1;
                                            cout<<"<---Your Error is Here....."<<endl;
                                        }
                                        else
                                        {
                                            flag=1;
                                            cout<<"<---Your Error is Here....."<<endl;
                                        }
                                    }
                                }
                                else
                                {
                                    flag=1;
                                    cout<<"<---Your Error is Here....."<<endl;
                                }
                            }
                        }
                    }
                    else
                    {
                        flag=1;
                        cout<<"<---Your Error is Here....."<<endl;
                    }
                }
                else
                {
                    flag=1;
                    cout<<"<---Your Error is Here....."<<endl;
                }
            }
        }
    }
    if(flag)    //if there is any error or not ie flag=1 or 0
    {
        cout<<endl<<endl<<"There is an Error"<<endl;
    }
    else
    {
        if(flag1)   //if there is any error or not ie flag1=1 or 0
        cout<<endl<<endl<<"There is an Error"<<endl;
        else if(flag2)  //if there is any error or not ie flag2=1 or 0
        cout<<endl<<endl<<"There is an Error"<<endl;
        else
        cout<<endl<<endl<<"There is No Error"<<endl;
    }
}


void read() //Reading the File and Parsing it
{
    ifstream fin;
    ofstream fout;
    char word[80],token[40];    //Declaring Variables
    int flag=0,i,j;
    fin.open("file.txt");
    fout.open("output.txt");
    if(!fin)    //Checking the file if it is opened or not
    {
        cout<<"Error!!! Can't Open File"<<endl;
        return;
    }
    while(fin>>word)    //Reading word from the file file.dat
    {
        flag=0,i=0;
        while(word[i]!='\0')    //Running till it encounters a null character
        {
            if(!isalpha(word[i]))   //If the word only contains alphabets
            {
                flag=1;
                break;
            }
            i++;
        }
        if(!flag)
        {
            fout<<word<<endl;
        }
        else
        {
            i=0;
            while(word[i]!='\0')    //Checking if the last Punctuator is a correct or not
            {
                if(word[i]=='(')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]==')')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='"')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]==',')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]==';')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='[')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='{')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]==']')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='}')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='.')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='_')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='!')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='@')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='#')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='$')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='%')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='^')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='&')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='*')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='-')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='+')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='=')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='|')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='`')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='~')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='\'')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='\\')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='<')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='>')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='?')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else if(word[i]=='/')
                {
                    fout<<word[i]<<endl;
                    i++;
                }
                else
                {
                    if(isdigit(word[i]))    //Taking the whole word with digits and alphabets
                    {
                        j=0;
                        while(isdigit(word[i])) //Checking if it has digits
                        {
                            token[j]=word[i];
                            j++;
                            i++;
                        }
                        token[j]='\0';
                        fout<<token<<endl;
                    }
                    else if(isalpha(word[i]))  //Checking if it has alphabets
                    {
                        j=0;
                        while(isalpha(word[i]))
                        {
                            token[j]=word[i];
                            j++;
                            i++;
                        }
                        token[j]='\0';
                        fout<<token<<endl;
                    }
                    else
                    i++;
                }
            }
        }
    }
    fin.close();
    fout.close();
    error();
}


int main()
{
    int ch;
    do
    {
        cout<<"------------------------------Mini Interpreter----------------------------------";
        cout<<endl<<"MENU"<<endl;
        cout<<"1.Check for errors!!!"<<endl;
        cout<<"2.Exit"<<endl;
        cin>>ch;
        system("clear");
        cout<<endl<<endl;
        switch(ch)
        {
            case 1: read(); //To parse the file and write in another file
                    break;
            case 2: cout<<endl<<"Thank You"<<endl;  //Finish
                    return 0;
            default:cout<<"Wrong Choice"<<endl;
        }
    }while(1);
return 0;
}
