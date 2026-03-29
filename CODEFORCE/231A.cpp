#include <iostream>
#include <vector>
using namespace std;

int counter (vector <int> questions){
    int counter= 0;
    for (int i =0; i<3;i++){
        if(questions[i]==1){
            counter++;
        }
    }
    return counter;
}
int main(){
    int numberquest;
    int ans = 0;
    cin >> numberquest;
    vector<int> questions(3);
    while(numberquest--){
        for(int i = 0; i < 3; i++){
            cin >> questions[i];
        }
        if(counter(questions)>1){
        ans ++;
        }
    }
    
    cout<< ans<<endl;;

}
