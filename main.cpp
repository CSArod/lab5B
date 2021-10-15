/*Name:Alejando_Rodriquez, 2001889172, Lab5;
*Description: while/for/doWhile/loop
*Input:integers
*output:integers
*/
//include proper libraries
#include <iostream>
int main(){
    //intitaial userINput
    int userInput;
    const int upperlimit = 10000; //user input upper bounds
    const int lower = 2; //userinput lower bounds
    const int bound = 40;
    //until input is true
    while(true){
    //prompt user for input value
    std::cout << "Enter a count between 2 and 10000 \n**";
    std::cin >> userInput;
    //check for input valid or not
    if(!std::cin || userInput < lower || userInput> upperlimit){
        std::cout << "\nError: Invalid entry, please retry" << std::endl;
        std::cin.clear();
        std::cin.ignore(bound,'\n');
        continue;
        }
        break;
    }
    //variables containing sums
    int evenSum =0;
    int oddSum =0;
    //for loop for even numbers
    for(int i=1;i<userInput;i+=2) {
        evenSum += i+1;
    }
    //return evenSum
        std::cout << "\nSum of even numbers: ";
        std::cout << evenSum <<std::endl;
    int i=1;
    //while loop for odd numbers
    while(i<=userInput) {
        oddSum += i;
        i += 2;
    }
    //return oddSum
    std::cout << "Sum of odd numbers:  ";
    std::cout <<oddSum << std::endl;
return 0;
}


