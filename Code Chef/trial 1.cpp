#include<bits/stdc++.h>
using namespace std;

void factorial_large_num(){
    int num;
    cout << "\nEnter a Number : ";
    cin >> num;

    vector<int> fact_vec; // storing the digits of factorial!

    fact_vec.push_back(num); // init. the value of starting value! of fact.

    long long int carry;

    for (int i = (num-1); i >= 2; i--){
        carry = 0;

        for (int j = fact_vec.size(); j >= 0; j--){
            
            fact_vec[j] = fact_vec[j] * i + carry;

            // finding carry!
            carry = fact_vec[j] / 10;

            // digit of the factorial!
            fact_vec[j] = fact_vec[j] % 10;

        }

        while (carry > 0){
            fact_vec.insert(fact_vec.begin(), carry % 10);

            carry /= 10;
        }
        
    }
    
    cout << "\nFactorial of the Number : \n--> " << fact_vec[3];
    cout << "\n\n";

}
