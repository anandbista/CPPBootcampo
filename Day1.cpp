//Intro
//C++ was developed by Bjarne Stroustrup in 1974
//C++ is extension of C language & both languages have same syntax
//C++ helps to do fast program, more control over system resources   
// memory management and high performance 
//Main difference between C & C++ is that C++ support classes & objects, While C does not.

#include<iostream>  // iostream aauta file cha ani program ma j j chaiyo tao aafai include gara vanneyra tao use garey ko .. Note: IO is input and output
using namespace std; // using namespace std means that we can use names for objects and variables from the standart library.
//Note: Every C++ statement ends with semicolon(;). If (;) layena last ma vaneysi error dheykhaunxa.

int main(){         // int main () is a entry function, ani yo {} vittra chai code leykhney.
    cout<<"Hello World"; // cout is an object used together with the insertion operator(<<) to output text. Its Pronouced is " SEE-OUt"
    cout<<"Hello world 775";
    return 0;   // return 0 mean ends of main function.
}

//using namespace std use nagarda ni hunxa. if gareyna vaey yesari leykhinxa 

#include <iostream>

int main(){
    std::cout<<"Hello world 2";
    return 0;
}


// C++ Statements : A computer is a list of instruction tos be executed by a computer, in programming language, these instructions are called "Statements"\
// cout<< "Hello World"; is instructs to the compiler to print the text "Hello World"
//cout chai jati ni launa milcha but new line ma result dheykhaudaina so,



//For New Lines We can use the "\n" character

#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World! \n";
    cout<<"I love C++ language \n \n"; //we can sue 2 (\n \n) to step down 2 colums  
    cout<<"I am Don";

    return 0;
}


// For Multi-line comments Use " start with this/* and ends with */"



// Variables 

//variables are just a containers for storing data values, just like kitchen ko box haru jasto kunai box ma hami salt rakhxam kasai ko ma suger and kai box ma chilly rakhxau sab ko aafnai aafnai property cha jastai salt chilly and sugar ko and tao chai type ho and data ko chai data type hunxa..
// there are different type ko varibles like : " int, double, char, string, bool"

// to know which varibles is then,

#include <iostream>
using namespace std;

int main(){
    int MyName = 15;
    cout<<MyName;
    return 1;
}
 
 //or we can also declare a varibles without assigning the value, and assign the value later:

#include <iostream>
using namespace std;

int main(){
    int MyName;
    MyName = 15;
    cout<< MyName;
    return 1;
}

//Note: if we assign a new value to an existing varible, it will overwrite the previous value:

#include <iostream>
using namespace std;

int main(){
    int MyName= 15; //MyName is 15
    MyName= 55;  // Now MyName is 55
    MyName= 60;  // Now MyName is 60
    cout<<MyName;
    
    return 0;
}

//Display Variables 

#include <iostream>
using namespace std;

int main (){
    int MyAge;
    MyAge=23;
    cout<< "I am "<< MyAge << " years old. \n" ;
    cout<< "Ma " << MyAge << " Barcha ko Bhaye";
 
    return 0;

}


//Add Variables Together

#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    x = 2;
    y = 3;
    z = 4;

    int sum = x+y+z;
    cout<< " The total sum is " <<sum<<".";

    return 0;
}

// Low level  vannya hardware ko najik matklab computer 0101 mattra bujhxa 
// High level vannya hardware vanda tada