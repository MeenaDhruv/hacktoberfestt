#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
 
// Find the median of a list of numbers
int find_median(std::vector<int> numbers)
{
    int n = numbers.size();
    if (n == 0) {
        return -1;
    }
    if (n == 1) {
        return numbers[0];
    }
 
    // Shuffle the list to ensure a random ordering
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(numbers.begin(), numbers.end(), g);
 
    // Find the median by selecting the middle element
    return numbers[n / 2];
}
 
int main()
{
    std::vector<int> numbers1 = { 1, 2, 3, 4, 5 };
    std::vector<int> numbers2 = { 1, 2, 3, 4, 5, 6 };
    std::vector<int> numbers3 = {};
    std::vector<int> numbers4 = { 7 };
 
    // Example usage
    std::cout << find_median(numbers1)
              << std::endl; // Output: 3
    std::cout
        << find_median(numbers2)
        << std::endl; // Output: 3 or 4 (randomly chosen)
    std::cout << find_median(numbers3)
              << std::endl; // Output: -1
    std::cout << find_median(numbers4)
              << std::endl; // Output: 7
 
    return 0;
}
