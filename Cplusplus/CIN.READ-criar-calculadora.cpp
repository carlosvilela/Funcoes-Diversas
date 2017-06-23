#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

main(){
    char a[] = ".";
    char b[] = ".";
    char x[] = ".";
    
    cin.read(a,1).read(x,1).read(b,1);
    
    int A = atoi(a);
    int B = atoi(b);
    
    if (strcmp(x, "+") == 0){
    
        cout << a << x << b << " = " << (A+B) << endl;
        
    } else{
        if (strcmp(x, "-") == 0){
            cout << a << x << b << " = " << (A-B) << endl;
        }else{
            if (strcmp(x, "*") == 0){
                cout << a << x << b << " = " << (A*B) << endl;
            } else{
                if (strcmp(x, "/") == 0){
                    
                    float i, j;
                    
                    i = (float) A;
                    j = (float) B;
                    
                    cout << a << x << b << " = " << (i/j) << endl;
                }
            }
        }
    
    }
    
    
    
}
