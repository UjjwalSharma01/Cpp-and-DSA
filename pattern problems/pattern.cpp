#include <bits/stdc++.h>
using namespace std;
int main(){

    cout<<"function check"<<endl;
    /*
    
    
    * * * *
    * * * *
    * * * * 
    * * * * 
    
    
    */
    // int n;
    //  cin>>n;
    // for (int i =1;i<=n;i++){
    //     for (int j=1;j<=n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    /*
    
    *
    * *
    * * *
    * * * *
    
    */

      // code her
        // for(int i=1;i<=2;i++){
        //     for(int j=1;j<=i;j++){
        //         cout<<"*";
        //     }
        //     cout<<endl;
        // }
    /*
    
    1
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5

 
    
    */  

    // for (int i=1;i<=n;i++){
    //         int k = 1+(i-1);
    //         for (int j=1;j<=i;j++){
    //             cout<<k<<" ";
    //         }
    //         cout<<endl;
    //     }      



    /*
     * * * *
     * * * 
     * *
     * 
    
    */


    // for(int i=5;i<=;i++){
	//         for (int j =5;j<=5-i;j--){
	//             cout<<"* ";
	//         }
	//         cout<<endl;
	//     }



    /*
    
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    
    */

    //  for(int i=1;i<=n;i++){
	//         int k =1;
	//         for(int j=1;j<=n-i+1;j++){
	//            cout<<k<<" ";
	//            k = k+1;
	//         }
	//         cout<<endl;
	//     }
	// }



    /*
        *
       ***  
      *****
     *******
    *********
    */
   int n;
   cin>>n;
//    approach 1 
     for(int i=1;i<=n;i++){
            // space
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k =1;k<=i+(i-1);k++){
                cout<<"*";
            }
            for(int l=1;l<=n-i;l++){
                cout<<" ";
            }
            cout<<endl;
        }
// approach 2
 for(int i=1;i<=n;i++){
            // space
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k =1;k<=2*i-1;k++){
                cout<<"*";
            }
            
            cout<<endl;
        }
cout<<endl;
   

   /*
     
   
    *********
     *******
      *****
       ***
        *
*/

  // rows
	   for(int i=1;i<=n;i++){
	       //spaces
	       for(int j=1;j<=i-1;j++){
	           cout<<" ";
	       }
	       //stars
	       for(int k=1;k<=(2*n)-(i*2-1);k++){
	           cout<<"*";
	       }
	       cout<<endl;
	   }


/*

        *
       ***  
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *


*/
    return 0;
}