//for printing the row value filled triangle
/*               1.
                                     1
                                     22
                                     333
                                     4444
                                     55555
*/


//                               2.
//                               *****
//                               ****
//                               ***
//                               **
//                               *


//  3.
//                     *****
//                     ****
//                     ***
//                     **
//                     *


//  4.
//                         1234
//                         123
//                         12
//                         1



//   5.
 //                                        *    
 //                                        ***
 //                                        *****
 //                                        *******
 //                                        *********


 //    6.
 //                     *********
//                      *******
//                       *****
//                        ***
//                         *


//   7.


// *********
//  *******
//   *****
//    ***
//     *


//  8.

//                                        *
//                                        **
//                                        ***
//                                        ****
//                                        *****
//                                        ****
//                                        ***
//                                        **
//                                        *



//   9.

//                       1
//                       12
//                       123
//                       1234
              

//10.


//11.
//            1         1
//            12       21
//            123     321
//            1234   4321
//            12345 54321


//12.

//                   A
//                   AB
//                   ABC
//                   ABCD
//                   ABCDE
                  

//  13.                ABCDEF
//                     BCDEF
//                     CDEF
//                     DEF
//                     EF
//                     F



//14.
//                                    AAAAAA
//                                    BBBBB
//                                    CCCC
//                                    DDD
//                                    EE
//                                    F



// 15.

//                    ABCDEF
//                    ABCDE
//                    ABCD
//                    ABC
//                    AB
//                    A


// 16. 

//                      E 
//                      D E
//                      C D E
//                      B C D E
//                      A B C D E



//           17.
//                              **********
//                              ****  ****
//                              ***    ***
//                              **      **
//                              *        *
//                              *        *
//                              **      **
//                              ***    ***
//                              ****  ****
//                              **********



// 18.

                             
# include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i;
        
        }
    cout<<endl;
    
    }
    cout<<endl;
}

  void print2(int n){
        for(int i=0;i<n;i++){
            for(int j=n;j>i;j--){
                cout<<"*";
    
            }
            cout<<endl;
        }
        cout<<endl;
     }

     void print3(int n){
            for(int i=0;i<n;i++){
                for(int j=n;j>i;j--){
                    cout<<"*";
        
                }
                cout<<endl;
            }
            
         }


void print4(int n){
   for(int i=1;i<=n;i++){
       for(int j=1;j<n-i+1 ;j++){
           cout<<j;

       }
       cout<<endl;
   }
}

void print5(int n){
   for(int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){

        cout<<" ";}
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
    
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
           cout<<endl;

       }
      
   }


   void print6(int n){
   for(int i=0;i<n;i++){
       for(int j=0;j<i;j++){

        cout<<" ";}
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
    
        }
        
                   cout<<endl;

       }
      cout<<endl;
   }


void print7(int n){
    for(int i=0;i<n;i++){

                    for(int j=0;j<i;j++){
             
                     cout<<" ";}
                     for(int j=0;j<2*n-(2*i+1);j++){
                         cout<<"*";
                 
                     }
                     
                                cout<<endl;
             
                    }
                  
               }

void print8(int n){
    int num=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" "<<num;
            num+=1;
        }
          cout<<endl;
    }

}

void print9(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print10(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";

        }
        for(int j=n-i;j>=1;j--){
            cout<<j;
            
        
            
        
        }
        
        cout<<endl;

        
        }
          
        cout<<endl;
    }



void print11(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //num
        for(int j=1;j<=i;j++){
            cout<<j;
        
        }
        
        //space
        for(int j=0;j<=space;j++){
            cout<<" ";        
        }


        //num
        for(int j=i;j>=1;j--){
            cout<<j;
        }
          cout<<endl;
          space-=2;                                 
   }
}
void print12(int n){
    
    

    for(char i =1;i<=n;i++){
        char ch='A';
        for(char j=1;j<=i;j++){
            cout<<ch;
            ch+=1;
            
        }
        cout<<endl;
        
    }
}

 void print13(int n){
    for(int i=0;i<=n;i++){
        char ch='A'+i;
        for(int j=0;j<n-i;j++){
            cout<<ch;
            ch++;
            
        }
        cout<<endl;
    }

}



void print14(int n){

    for(int i=0;i<n;i++){
        
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
            //print alpha
        }
        //char ch='A';
        int breakpoint=(2*i+1)/2;
            char ch='A';
            for(int j=1;j<=2*i+1;j++){
                cout<<ch;
                if(j<=breakpoint)
                ch++;
                else{
                    ch--;
                }
            }
            
            cout<<endl;
        }
        
    }


    void print15(int n){
        for(int i=0;i<=n;i++){
           char ch='A';
           for(int j=0;j<n-i;j++){
            cout<<ch;
            ch++;
           }
           cout<<endl;
        }
    }

    void print16(int n){
        for(int i=0;i<n;i++){
            
            for(char ch='E'-i;ch<='E';ch++){
                cout<<ch<<" ";}
                //ch++;
                
            
            cout<<endl;
        }
    
    }

    void print17(int n){
        for(int i=0;i<n;i++){     
            //star
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
            //space
            for(int j=0;j<2*i;j++){
                cout<<" ";}

            //star
            for(int j=0;j<n-i;j++){
                cout<<"*";

        }
        cout<<endl;
        //lower hals
    }
    int he=8;
    for(int i=1;i<=n;i++){
        //star
    
        for(int j=1;j<=i;j++){
            cout<<"*";
    }
    //space
    //int mid=n/2;
    
    
    for(int j=0;j<he;j++){
        cout<<" ";
        
    }
    //star
    for(int j=1;j<=i;j++){
        cout<<"*";
            }
            he-=2;
cout<<endl;
    
        }
        cout<<endl;}


        


    

    void print18(int n){

        int he=8;
    for(int i=1;i<=n;i++){
        //star
    
        for(int j=1;j<=i;j++){
            cout<<"*";
    }
    //space
    //int mid=n/2;
    
    
    for(int j=0;j<he;j++){
        cout<<" ";
        
    }
    //star
    for(int j=1;j<=i;j++){
        cout<<"*";
            }
            he-=2;
cout<<endl;
    
        }
       

        for(int i=0;i<n;i++){     
            //star
            for(int j=0;j<n-i;j++){
                if (i==0&&j==0){
                    continue;
                }
               else 
                
                cout<<"*";
            }
            //space
            for(int j=0;j<2*i;j++){
                cout<<" ";}

            //star
            for(int j=0;j<n-i;j++){
                cout<<"*";

        }
        cout<<endl;
        
    }
    }
    

    void print19(int n) {
        int he = 2 * n;  // Dynamic spaces
    
        // 🔷 First Half
        for(int i = 1; i <= n; i++) {
            // Left stars
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
    
            // Spaces in middle
            for(int j = 1; j <= he; j++) {
                cout << " ";
            }
    
            // Right stars
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
    
            he -= 2;
            cout << endl;
        }
    
        he = 2;  // Reset spaces for second half
    
        // 🔷 Second Half (Skip First Row to avoid double middle)
        for(int i = n - 1; i >= 1; i--) {     
            // Left stars
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
    
            // Spaces in middle
            for(int j = 1; j <= he; j++) {
                cout << " ";
            }
    
            // Right stars
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
    
            he += 2;
            cout << endl;
        }
    }
    

void print20(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
cout<<endl;
    }
}


void print21(int n){
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= (n - i); space++)
            cout << " ";

        if (i == 1)
            cout << "*";
        else {
            cout << "*";
            for (int space = 1; space <= (2 * i - 3); space++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    // Lower Half
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= (n - i); space++)
            cout << " ";

        if (i == 1)
            cout << "*";
        else {
            cout << "*";
            for (int space = 1; space <= (2 * i - 3); space++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    
}




int main(){
    int n;
    cin>>n;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    // print8(n);
    // print9(n);
     //print10(n);
     //print11(n);
     //print12(n);
     //print13(n);
       //print14(n);
     //print15(n);
      //print16(n);
     // print17(n);
//print18(n);
//print19(n);
//print20(n);
print21(n);
   return 0;
}





