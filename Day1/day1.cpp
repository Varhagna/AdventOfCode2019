#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int Part1(vector<int> & input);
int Part2(vector<int> & input);

int main() {
    
    ifstream fin;

    fin.open("day1in.txt");

    if(!fin.is_open()) {
        cout << "Error unable to open input" << endl;
    } 

    vector<int> input;

    int num = 0;
    while(fin >> num) {
        input.push_back(num);
    }
    int part1 = Part1(input);
    int part2 = Part2(input);
    cout << "Part 1 Answer: " << part1 << endl;
    cout << "Part 2 Answer: " << part2 << endl;

    return 0;
}

int Part1(vector<int>& input) {
    int sum = 0;
    for(auto num : input) {
        sum += (num / 3) - 2;
    }
    return sum;
}

int Part2(vector<int>& input) {
    int sum = 0;
    for(auto num : input) {
        int temp = num;
        while(temp / 3 > 2) {
            temp /= 3;
            temp -= 2;
            sum += temp;
        }
    }
    return sum;
}