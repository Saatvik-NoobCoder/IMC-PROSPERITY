#include<iostream>
using namespace std;

int main(){
    // string str = "hello world";
    // cout << str <<endl;

    // string str1 = "hello";
    // cout << str1 <<endl;

    // cout << (str + str1) << endl;
    // string str2 = str + str1;

    // cout << str2.length() << endl;
    // int vowel = 0;
    // int consonant = 0;
    // for (int i = 0; i<str2.length(); i++){
    //     if(str2[i]== 'a' || str2[i]== 'e' || str2[i]== 'i' || str2[i]== 'o' || str2[i]== 'u'  ){
    //         vowel++;
    //     }else{
    //         if(str[i] == ' '){
    //             consonant --;
    //         }
    //         consonant++;
    //     }

    // }
    // cout << vowel << endl;
    // cout << consonant << endl;
    string str;
    cout << "Enter to check Palindrome: " << endl;
    getline(cin, str);
    
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev){
        cout << "It is a Palindrome" << endl;
    }else { 
        cout << "Not a Palindrome" << endl;
    }

    



    return 0;
}