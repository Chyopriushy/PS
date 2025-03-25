//
// Created by mmkan on 2025-03-25.
//
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t, n, tmp;
vector<int> numbers;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while(t--){

      int solution = 0;

      cin >> n;

      numbers.resize(n);

      for(auto& num: numbers){
           cin >> num;
      }

      for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
          if (numbers[j] > numbers[j + 1]){
            swap(numbers[j + 1], numbers[j]);
            solution++;
          }
        }
      }
      cout << solution << "\n";
    }



}