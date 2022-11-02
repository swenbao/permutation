#include <iostream>

void P(char *a, const int n, const int k);
void swap(char& a, char&b);
char* string2char(std::string& a, char* b);

int main(){
    //std::cout << "enter string : ";
    std::string str = "ab";
    //std::cin >> str;
    int n = 0, k = str.length();
    char c[k]; 
    P(string2char(str, c), n, k-1);
    std::cout << std::endl << c << std::endl;
    return 0;
}

void P(char *a, const int k, const int m){
    if(k == m){
        for(int i = 0; i <= m; i++){
            std::cout << a[i] << " ";
        }
        std::cout << std::endl;
    } else {
        for(int i = k; i <= m; i++){
            swap(a[k], a[i]);
            P(a, k+1, m);
            swap(a[k], a[i]);
        }
    }
}

void swap(char& a, char&b){
    char temp = a;
    a = b;
    b = temp;
}

char* string2char(std::string& a, char* b){
    strcpy(b, a.data());
    a.clear();
    return b;
}