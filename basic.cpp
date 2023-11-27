#include<iostream>
using namespace std;
#include<vector>

int main() {
    int arr[] = {1,2,3,4,5};

    
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);//we can use size() in vector formate 
    cout <<sizeOfArray << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    cout<< vec.size() << std::endl;

    string myString = "Hello";
    cout << "Size of the string: " << myString.size() << '\n';
    cout << "Length of the string: " << myString.length() << '\n';

}