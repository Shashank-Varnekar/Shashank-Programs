#include<iostream>
using namespace std;

int power(int loc){
    int result = 1;
    while (loc != 0) {
        result *= 2;
        --loc;
    }
    return result;
}

int decimal(int i, int len){
    int loc = len - i - 1;
    int ans = power(loc);
    return ans;
}

int calculation(int sum){
    int pow = 1;
    while(sum % power(pow) == 0){
        pow++;
    }
    return pow-1;
}

int main(){
    string str;
    cin >> str;
    char temp, temp1;
    int victory = 0;
    int len = str.length();
    int count = 0;
    for(int i=0; i < len; i++){
        if(str[i] == '1')
            count++;
    }
    jump:
        int sum = 0;
        for(int i=0; i < len; i++){
            if(str[i] == '1')
                sum += decimal(i, len);   
        }
        if(count == len){
            victory = calculation(sum);
        }
        else if(sum % 2 == 0){
            victory = calculation(sum);
        }
        else{
            temp = str[len-1];
            for(int i=0; i < len; i++){
                temp1 = str[i+1];
                str[i+1] = str[0];
                str[0] = temp1;
            }
            str[0] = temp;
            goto jump;
        }
    cout << victory;
    return 0;
}
