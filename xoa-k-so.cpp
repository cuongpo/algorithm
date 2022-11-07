/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    int p,k;
    long long pointer;
    int a[10000];
    int b[10000];
    bool check = true;
    std::string s1 = "";
    std::string s3 ="";
    cin >> p;
    cin >> k;
    for (int i=1;i<=p;i++) {
        cin >> a[i];
    }
    for (int i=1;i<=p;i++) {
        cin >> b[i];
    }
    for (int i=1;i<=p;i++) {
        for (int j=1;j<=a[i];j++) {
            std::string s2 =std::to_string(b[i]);
            s1 += s2;
            
        }
    }
    // std::cout << s1 << endl;
    
    
    // Xoa het cac so den so 0
    pointer = s1.length();
    
    
    while (check) {
        for (int i=0;i < s1.length();i++) {
            if (s1[i]=='0') {
                pointer = i;
                if (pointer >k) {
                    check = false;
                    break;
                } else {
                    k = k-pointer;
                    s1 = s1.substr(pointer,s1.length()+1);
                    s1 = std::to_string(atoi(s1.c_str()));
                    // cout << s1 << endl;
                    break;
                }
            } else {
                check = false;
            }
        }
    }
  
    while (k>0) {
        check = true;
        for (int i=0;i < s1.length();i++) {
            if (s1[i]=='9') {
               
                s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);
                
                k--;
                check = false;
            }  
        }
        if (check == true) {
            for (int i=0;i < s1.length();i++) {
                if (s1[i]=='8') {
                   
                    s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);
                    
                    k--;
                    check = false;
                }  
            }
        }
        if (check == true) {
            for (int i=0;i < s1.length();i++) {
                if (s1[i]=='7') {
                    
                    s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);
                    
                    k--;
                    check = false;
                }  
            }
        }
        if (check == true) {
            for (int i=0;i < s1.length();i++) {
                if (s1[i]=='6') {
                   
                    s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);
                    
                    k--;
                    check = false;
                }  
            }
        }
        if (check == true) {
            for (int i=0;i < s1.length();i++) {
                if (s1[i]=='5') {
                   
                    s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);
                    
                    k--;
                    check = false;
                }  
            }
        }
        if (check == true) {
            for (int i=0;i < s1.length();i++) {
                if (s1[i]=='4') {

                    s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);

                    k--;
                    check = false;
                }  
            }
        }
        if (check == true) {
            for (int i=0;i < s1.length();i++) {
                if (s1[i]=='3') {
                    s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);
                    k--;
                    check = false;
                }  
            }
        }
        if (check == true) {
            for (int i=0;i < s1.length();i++) {
                if (s1[i]=='2') {
                    
                    s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);
                    
                    k--;
                    check = false;
                }  
            }
        }
        if (check == true) {
            for (int i=0;i < s1.length();i++) {
                if (s1[i]=='1') {
                    
                    s1 = s1.substr(0,i) + s1.substr(i+1,s1.length()-1);
                   
                    k--;
                    check = false;
                }  
            }
        }
        
    }
    
    cout << s1 << endl;

    
}
