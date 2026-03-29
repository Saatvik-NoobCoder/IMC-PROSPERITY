// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // int frequency(vector<int> array, int lj, int rj){
// //     int freq = 0;
// //     int ans = 0;
// //     for (int i = lj-1; i< rj; i++){
// //         int freq =0;
// //         for (int j = rj-1; j>=i ; j--){
// //             if(array[i] == array[j]){
// //                 freq++;
// //             }
// //         }
// //         if(freq == array[i]){
// //             ans++;
// //         }
        
// //     }
// //     return ans;
// // }

// // int main(){
// //     int size, queries, lj, rj;
// //     cin >> size>> queries;
// //     vector<int> array(size);
// //     for (int i = 0; i < size; i++) {
// //             cin >> array[i];
// //     }
// //     while(queries--){
// //         cin >> lj >> rj;
// //         cout << frequency(array,lj,rj)<< endl;;
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int frequency(const vector<int>& array, int lj, int rj) {
//     unordered_map<int, int> freqMap;
//     for (int i = lj - 1; i < rj; i++) {
//         freqMap[array[i]]++;
//     }

//     int ans = 0;
//     for (auto& [num, freq] : freqMap) {
//         if (num == freq) {
//             ans++;
//         }
//     }
//     return ans;
// }

// int main() {
//     int size, queries, lj, rj;
//     cin >> size >> queries;
//     vector<int> array(size);
//     for (int i = 0; i < size; i++) {
//         cin >> array[i];
//     }

//     while (queries--) {
//         cin >> lj >> rj;
//         cout << frequency(array, lj, rj) << "\n";
//     }
//     return 0;
// }

